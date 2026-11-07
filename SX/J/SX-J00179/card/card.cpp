#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i,a,b) for(int i=a;i<=b;i++)
int a[500005], ans[300005];

struct node {
	int num, k;
} v[300005];

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	fr(i, 1, n) {
		cin >> a[i];
	}
	if (n > 500) {
		fr(i, 1, n) {
			ans[a[i]] = i;
		}
		fr(i, 1, m) {
			cout << ans[i] << " ";
		}
	} else {
		fr(i, 1, n) {
			memset(v, 0, sizeof v);
			fr(j, i, n) {
				if (v[a[j]].num) {
					v[a[j]].num++;
					ans[a[j]]++;
					fr(k, v[a[j]].k + 1, j) {
						v[a[k]].num--;
						ans[a[k]]--;
					}
				} else {
					v[a[j]].k = j;
					v[a[j]].num++;
					ans[a[j]]++;
				}
			}
		}
		fr(i, 1, m) {
			cout << ans[i] << " ";
		}
	}
	return 0;
}