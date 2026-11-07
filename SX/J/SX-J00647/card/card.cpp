#include <bits/stdc++.h>
using namespace std;
long long n, m, a[500005], T[300005];

struct nobe {
	long long time, s;
} t[300005];

int main() {
	freopen("card5.in", "r", stdin);
	freopen("card5.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			t[i].s = 0;
			t[i].time = 0;
		}
		for (int i = k; i <= n; i++) {
			if (t[a[i]].s == 0) {
				t[a[i]].s++;
				t[a[i]].time = i;
			} else {
				for (int j = t[a[i]].time; j <= i - 1; j++) {
					t[a[j]].time = 0;
					t[a[j]].s = 0;
				}
				t[a[i]].time = i;
				t[a[i]].s++;
			}

		}
		for (int i = 1; i <= m; i++) {
			if (t[i].s != 0)
				T[i]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << T[i] << " ";
	}
	return 0;
}