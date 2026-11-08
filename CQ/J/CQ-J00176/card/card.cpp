#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[500005],v[500005],vis[500005],ans[500005],k,nxt[500005],b[500005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i],b[a[i]]++;
	for(int i=n;i>=1;i--)if(!v[a[i]])nxt[a[i]]=i,v[a[i]]=1;
	vis[a[n]]=a[n];
	for(int i=n-1;i>=1;i--)if(nxt[a[i]]==i)vis[a[i]]=a[i+1];
	for(int i=n;i>=1;i--){
		if(nxt[a[i]]==i){
			int k=a[i];
			while(1){
				ans[k]+=b[a[i]];
				if(k==vis[k])break;
				k=vis[k];
			}
		}
	}
	for(int i=1;i<m;i++)cout<<ans[i]<<" ";cout<<ans[m];
	return 0;
}

