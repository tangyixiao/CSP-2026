#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,m;
int a[200010];
bool vis[200010];
int ma=-2e9;
void dfs(int now,int sum,int x){
	if(sum<ma)return ;
	if(now==n+1){
		if(x==m)ma=max(ma,sum);
		return ;
	}
	dfs(now+1,sum&a[now],x+1);
	dfs(now+1,sum,x);
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	bool ff=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	double f=log2(n);
	int s=log2(n);
	if(n<=20){
		dfs(1,1073741823,0);
		cout<<ma;
	}else if(m==1){
		for(int i=1;i<=n;i++){
			ma=max(ma,a[i]);
		} 
		cout<<ma;
	}else if(m==n){
		int ans=1073741823;
		for(int i=1;i<=n;i++){
			ans=ans&a[i];
		}
	}else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ma=max(ma,a[i]&a[j]);
			}
		}
		cout<<ma;
	}else if(f==(double)s){
		cout<<0;
	}else{
		dfs(1,1073741823,0);
		cout<<ma;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
