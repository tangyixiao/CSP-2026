#include <bits/stdc++.h>
using namespace std;
long long a[200005];
bool vis[300005],vis1[300005];
long long ci[300005]={},idx[300005];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	for(int i=1; i<=n; i++) {
		memset(vis,0,sizeof(vis));
		memset(idx,0,sizeof(idx));
		for(int j=i; j<=n; j++) {
			if(vis[a[j]]==0) {
				vis[a[j]]=1,ci[a[j]]++,idx[a[j]]=j,vis1[j]=1;
//				cout<<vis[a[j]]<<" "<<ci[a[j]]<<" "<<idx[a[j]]<<endl;
			} else {
				for(int k=idx[a[j]]; k<j; k++) {
					if(vis1[k]) {
						vis[a[k]]=0,ci[a[k]]--,idx[a[k]]=0,vis1[k]=0;
					}	
//					cout<<vis[a[k]]<<" "<<ci[a[k]]<<" "<<idx[a[k]]<<endl;
				}
				vis[a[j]]=1,ci[a[j]]++,idx[a[j]]=j,vis1[j]=1;
//				cout<<vis[a[j]]<<" "<<ci[a[j]]<<" "<<idx[a[j]]<<endl;
			}
		} 
	}
	for(int i=1; i<=m; i++) {
		cout<<ci[i]<<" ";
	}
	return 0;
}
