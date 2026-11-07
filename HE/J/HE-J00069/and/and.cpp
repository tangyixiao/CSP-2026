#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,ans=0;
int a[200009],p[200009];
void dfs(int now,int can){
	if(now==n) return ;
	if(can==1){
		int t=a[now];
		for(int i=1;i<=n;i++){
			if(p[i]){
				t&=a[i];
			}
		}
		ans=max(ans,t);
		return ;
	}
	p[can]=0;
	dfs(now+1,can);
	p[can]=1;
	dfs(now+1,can-1);
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	dfs(1,m);
	p[1]=1;
	dfs(1,m-1);
	cout<<ans;
	return 0;
}
