#include<bits/stdc++.h>
using namespace std;
int n,m,vis[200005];
long long ans,a[200005];
void dfs(int u,int num,long long sum){
    if(num>=m){
    	ans=max(ans,sum);
    	return;
	}
    vis[u]=1;
	for(int i=1;i<=n;i++){
		if(vis[i]==1) continue;
		dfs(i,num+1,sum&a[i]);
	}
	vis[u]=0;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
		return 0;
	}
	else if(m==n){
		for(int i=1;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
		return 0;
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	else{
	    for(int i=1;i<=n;i++){
		    dfs(i,1,a[i]);
	    }
	    cout<<ans;
	}
	return 0;
}