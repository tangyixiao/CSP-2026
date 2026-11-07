#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
bool flag=true;
vector<int> a(200010);
bool check(){
	for(int i=29;i>=0;i--)
		if(n==(1<<i)) return true;
	return false;
}
void dfs(int step,int now,int num){
	if(step==(n+1)){
		if(now==m) ans=max(ans,num);
		return ;
	}
	if(now<=m) dfs(step+1,now+1,num&a[step]);
	dfs(step+1,now,num);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>4) flag=false;  
	}
	if(n<=20){
		dfs(1,0,INT_MAX);
		cout<<ans;
	} else if(n<=2000){
		sort(a.begin()+1,a.begin()+n+1);
		if(m==1) cout<<a[n];
		else if(m==n){
			ans=a[1];
			for(int i=1;i<=n;i++){
				ans&=a[i];
			}
		}
		else{
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					ans=max(ans,a[i]&a[j]);
				} 
			}
		}
		cout<<ans;
	} else if(flag){
		int flag1=0,flag2=0,flag3=0,flag4=0;
		for(int i=1;i<=n;i++){
			if(a[i]==1) flag1++;
			if(a[i]==2) flag2++;
			if(a[i]==3) flag3++;
			if(a[i]==4) flag4++;
		}
		if(flag4>=m) cout<<4;
		else if(flag3>=m) cout<<3;
		else if(flag3+flag2>=m) cout<<2;
		else if(flag1>=m) cout<<1;
		else cout<<0;
	} else {
		sort(a.begin()+1,a.begin()+n+1);
		ans=a[n];
		for(int i=1;i<m;i++){
			ans&=a[n-i];
		}
		cout<<ans;
	}
		return 0; 
}
