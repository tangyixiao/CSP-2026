#include <bits/stdc++.h>
#define int long long
#define db double
#define fr(i,s,n) for(int i=s;i<=n;i++)
#define dn(i,s,n) for(int i=s;i>=n;i--)
#define please return
#define AC 0
using namespace std;
int v[200005], a[200005], ans[200005], cnt[200005];

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	fr(i, 1, n) {
		cin >> a[i];
	}
	fr(t, 1, n) {
		memset(ans, 0, sizeof(ans));
		memset(v, 0, sizeof(v));
		int r = 0;
		fr(i, t, n) {
			r++;
			if (v[a[i]] > 0) {
				fr(j, v[a[i]] + 1, r - 1) {
					v[ans[j]] = 0;
				}
				r = v[a[i]];
			}
			v[a[i]] = r;
			ans[r] = a[i];
		}
		fr(i, 1, r) {
			cnt[ans[i]]++;
		}
	}
	fr(i, 1, m)cout << cnt[i] << " ";
	please AC;
}
