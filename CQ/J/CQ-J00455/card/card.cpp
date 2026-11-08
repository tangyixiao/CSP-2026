#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+5;
int n,m,a[N],ans[N],last[N];
signed main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for (int i=1;i<=n;i++) cin>>a[i];
	for (int i=n;i>=1;i--) {
		if (last[a[i]]==0) last[a[i]]=i;
		for (int j=last[a[i]];j<=n;) {
			if (last[a[j]]==j) {
				ans[a[j]]++;
				j++;
			}else j=last[a[j]];
		}
	}
	for (int i=1;i<=m;i++) {
		cout<<ans[i];
		if (i!=m) cout<<" "; 
	}
	return 0;
}

