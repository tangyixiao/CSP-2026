#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[500005],lst[500005];
bool f[500005];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;++i) {
		cin>>a[i];
	}
	for (int i=1;i<=n;++i) {
		memset(f,0,sizeof(f));
		memset(lst,0,sizeof(lst));
		for (int j=i;j<=n;++j) {
			if (lst[a[j]]!=0 && f[lst[a[j]]]==0) {
				for (int t=lst[a[j]];t<j;++t) f[t]=1;
			}
			lst[a[j]]=j;
		}
		for (int j=i;j<=n;++j) if (f[j]==0) ans[a[j]]++;
	}
	for (int i=1;i<=m;++i) cout<<ans[i]<<" ";
	cout<<endl;
	return 0;
}
