#include <bits/stdc++.h>
using namespace std;
long long a[200005],ans=-9999999,n,m,s[200005];
bool vis[200005];
void dfs(int k){
	if(k>m){
		long long ans2=s[1];
		for(int i=1;i<=m;i++)ans2=(ans2&s[i]);
		ans=max(ans,ans2);
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			s[k]=a[i];
			vis[i]=1;
			dfs(k+1);
			vis[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	dfs(1);
	cout<<ans;
	return 0;
} 

