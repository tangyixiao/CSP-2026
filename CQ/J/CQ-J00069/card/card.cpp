#include<bits/stdc++.h>
using namespace std;
int n,m,a[500001],vis[300001],l=0,s[500001],ans[300001];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	for(int i=1; i<=n; i++) {
		for(int j=i; j<=n; j++) {
			if(vis[a[j]]==0) {
				vis[a[j]]=(++l);
				s[l]=a[j];
			} else {
				while(s[l]!=a[j]) {
					vis[s[l]]=0;
					s[l]=0;
					l--;
				}
			}
		}
		for(int j=1; j<=l; j++) {
			ans[s[j]]++;
		}
		for(int i=1; i<=m; i++) {
			vis[i]=0;
		}
		for(int i=1; i<=n; i++) {
			s[i]=0;
		}
		l=0;
	}
	for(int i=1; i<=m; i++) {
		cout<<ans[i]<<" ";
	}
	return 0;
}
