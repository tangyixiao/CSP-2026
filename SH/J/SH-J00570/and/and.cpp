#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,vis[40],a[1000005];
int ans;
void dfs(int p){
	if(p==n+1){
		int as=-1,cnt=0;
		for(int i=1;i<=n;i++){
			if(vis[i]){
				cnt++;
				if(as==-1)as=a[i];
				else as=as&a[i];
			}
		}
		if(cnt==m)ans=max(ans,as);
		return;
	}
	vis[p]=1;
	dfs(p+1);
	vis[p]=0;
	dfs(p+1);
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=20){
		dfs(1);
		cout<<ans;
		return 0;
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
		cout<<ans;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
	}
	if(m==n-1){
		int as=a[1];
		for(int i=2;i<=n;i++){
			as&=a[i];
		}
		cout<<as;
	}
}
