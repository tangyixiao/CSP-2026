#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m;
int a[1000000];
int mp[2000010];
int b[1000000];
int d[1000000];
int l;

signed main() {
	freopen("card.in", "r",  stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		memset(mp, 0, sizeof(mp));
		l = 0;
		for (int j = i; j <= n; j++) {
			if (mp[a[j]] == 0) {
				l++;
				mp[a[j]] = l;
				b[l] = a[j];
			} else {
				for (int k = mp[a[j]] + 1; k <= l; k++) {
					mp[b[k]] = 0;
				}
				l = mp[a[j]];
			}
		}
		for (int j = 1; j <= l; j++) {
			d[b[j]]++;
		}
	}
	for (int j = 1; j <= m; j++) {
		cout << d[j] << " ";
	}

	return 0;
}


