#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010],ans;
bool cmp(int x,int y){return x>y;}
int x(int sum,int k,int xb){
	if(k==1){
		int num=0;
		for(int i=xb;i<=n;i++){
			num=max(num,a[i]&sum);
		}return num;
	}int num=0;
	for(int i=xb;i<=n-k+1;i++){
		num=max(num,x(sum&a[i],k-1,i+1));
	}return num;
}
bool check(){
	for(int i=1;i<=n;i++)if(a[i]>=4)return 0;
	return 1;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(n<=20){//1-5
		cout<<x((1<<21)-1,m,1);
	}else if(m==1){//6
		ans=0;
		for(int i=1;i<=n;i++)ans=max(ans,a[i]);
		cout<<ans;
	}else if(m==n){//7
		ans=a[1];
		for(int i=2;i<=n;i++)ans&=a[i];
		cout<<ans;
	}else if(m==2){//8-10
		ans=0;
		for(int i=1;i<=n-1;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}cout<<ans;
	}else if(check()){//16,17
		ans=a[1];
		sort(a+1,a+n+1,cmp);
		for(int i=2;i<=m;i++){
			ans&=a[i];
		}cout<<ans;
	}else{//13(A)
		sort(a+1,a+n+1,cmp);
		cout<<a[m];
	}
}