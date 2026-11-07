#include <bits/stdc++.h>
#define int long long
#define maxn 500010

using namespace std;

int n, m, a[maxn];
int x[maxn], cnt=0, t[maxn], cntt=-1;

signed main () {
	
	freopen ("card.in", "r", stdin);
	freopen ("card.out", "w", stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	cin>>n>>m;
	for (int i=1; i<=n; i++) cin>>a[i];
	for (int i=n; i>=1; i--) {
		for (int j=1; j<=n; j++) {
			if (cnt!=0) {
				if (binary_search (x+1, x+1+cnt, a[j])) {
					cnt=*lower_bound (x+1, x+1+cnt, a[j]);
				} else x[++cnt]=a[j];
			} else x[++cnt]=a[j];
		}
		for (int j=1; j<=cnt; j++) {
			t[x[j]]++;
			cntt=max (cntt, x[j]);
		}
		cnt=0;
		memset (x, 0, sizeof x);
	}
	for (int i=1; i<=cntt; i++) {
		if (t[i]) cout<<t[i]<<' ';
	}
	
	return 0;
}//T4