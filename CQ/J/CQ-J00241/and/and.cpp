#include <bits/stdc++.h>
using namespace std;
//int read(){
//	int x=0,f=1;
//	char ch=getchar();
//	while(!(ch>='0' and ch<='9')){
//		if(ch=='-') f=-1;
//		ch=getchar();
//	}
//	while(ch>='0' and ch<='9'){
//		x=x*10+(ch-'0');
//		ch=getchar();
//	}
//	return x*f;
//}
int n,m,a[200010],sum;
bool x4=1;
int dfs(int i,int w,int m1){
//	cout<<i<<' '<<w<<' '<<m1<<'\n';
	if(m1==0) return w;
	if(i>=n) return -1;
	if(m1==m) return max(dfs(i+1,0,m1),dfs(i+1,a[i],m1-1));
	return max(dfs(i+1,(w&a[i]),m1-1),dfs(i+1,w,m1));
} 
int bl(){
	int m1=m,sum1=a[1];
	for(int i=1;i<=n,m1;i++,m1--){
		sum1&=a[i];
	}
	return sum1;
}
bool cmp(int x,int y){
	return x>y;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("","r",stdin);
	freopen("","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>4) x4=0;
	}
	sort(a+1,a+n+1);
	
	for(int i=1;i<=n;i++) cout<<a[i]<<' ';
	cout<<'\n';

	if(n<=20){
		sort(a+1,a+n+1,cmp);
		cout<<max(dfs(1,0,m),bl());
	}
	else if(m==1){
		cout<<a[n];
	}
	else if(m==n){
		sum=a[n];
		for(int i=1;i<=n;i++){
			sum&=a[i];
		}
		cout<<sum; 
	}
	else if(m==2 and n<10000){
		sum=INT_MIN;
		for(int i=n;i>=1;i--){
			for(int j=i-1;j>=1;j--){
				if(i!=j){
					sum=max(sum,(a[i]&a[j]));
				}
			}
			if(sum>i) break;
		}
		cout<<sum;
	}
	else if(x4){
		int b[6]={0,0,0,0,0,0};
		for(int i=1;i<=n;i++){
			b[a[i]]++;
		}
		int sum=INT_MIN;
		for(int i=0;i<=4;i++){
			if(b[i]>=m) sum=max(i,sum);
		}
		for(int i=0;i<=4;i++){
			for(int j=i+1;j<=4;j++){
				if((b[i]+b[j])>=m) sum=max((i&j),sum);
			}
		}
		for(int i=0;i<=4;i++){
			for(int j=i+1;j<=4;j++){
				for(int k=j+1;k<=4;k++){
					if((b[i]+b[j]+b[k])>=m) sum=max(sum,(i&j&k));
				}
			}
		}
		for(int i=0;i<=4;i++){
			for(int j=i+1;j<=4;j++){
				for(int k=j+1;k<=4;k++){
					for(int l=k+1;l<=4;l++){
						if((b[i]+b[j]+b[k]+b[l])>=m) sum=max(sum,(i&j&k&l));
					}
				}
			}
		}
		for(int i=0;i<=4;i++){
			for(int j=i+1;j<=4;j++){
				for(int k=j+1;k<=4;k++){
					for(int l=k+1;l<=4;l++){
						for(int l1=l+1;l1<=4;l1++){
							if((b[i]+b[j]+b[k]+b[l]+b[l1])>=m) sum=max(sum,(i&j&k&l&l1));
						}
					}
				}
			}
		}
		cout<<sum;
	}
	return 0;
}

