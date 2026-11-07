#include<bits/stdc++.h>
#define int long long
using namespace std;
stack<int> y;
int x[200005];
int z[200005];
int ans[200005];
signed main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>x[i];
	}
	for(int i=1; i<=n; i++) {
		for(int i=1; i<=m; i++) {
			z[i]=0;
		}
		while(y.size()>0) {
			y.pop();
		}
		for(int j=i; j<=n; j++) {
			z[x[j]]++;
			if(z[x[j]]>=2) {
				while(z[x[j]]>=2) {
					z[y.top()]--;
					y.pop();
				}
			}
			y.push(x[j]);
		}
		for(int j=1; j<=m; j++) {
			if(z[j]==1) {
				ans[j]++;
			}
		}
	}
	for(int i=1; i<=m; i++) {
		cout<<ans[i]<<' ';
	}
	return 0;
}