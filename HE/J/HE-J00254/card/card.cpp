#include<bits/stdc++.h>
using namespace std;
#define ll long long
const size_t mn = (size_t)(5e5+100);
int n,m;
bool iszh=0;
ll a[mn],b[mn],vis[mn],ans[mn];
signed main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	for(int j=0; j<n; j++) {
		int nw=1;
		memset(vis,0,8*m+8);
		for(int i=j; i<n; i++) {
			if(vis[a[i]]==0) {
				b[nw]=a[i];
				vis[a[i]]=nw;
				nw++;
				if(iszh) cout<<"a"<<nw;
			} else {
				nw--;
				while(nw!=vis[a[i]]) {
					vis[b[nw]]=0;
					nw--;
				}
				nw++;
				if(iszh) cout<<"b"<<nw;
			}
		}
		if(iszh) cout<<endl;
		for(int i=1; i<=m; i++) {
			if(vis[i]) ans[i]++;
			if(iszh) cout<<ans[i]<<" ";
		}
		if(iszh) cout<<endl;
	}
	for(int i=1; i<=m; i++) {
		cout<<ans[i]<<" ";
	}
	return 0;
}
