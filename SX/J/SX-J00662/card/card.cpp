#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 5e5+5;

struct U {
	bool b;
	int w;
} u[N];
ll n, a[N], m, aa[N], s[N];
bool f[N];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int t = n;
	while (t--) {
		for (int i = 1; i <= n; i++) {
			aa[i] = 0;
			f[a[i]] = 0;
			u[a[i]].b = 0;
			u[a[i]].w = 0;
		}
		for (int i = n - t; i <= n; i++) {
			if (u[a[i]].b == 0) {
				aa[i] = a[i];
				u[a[i]].b = 1;
				u[a[i]].w = i;
			} else {
				for (int j = u[a[i]].w + 1; j <= n; j++) {
					if (aa[j] == 0)
						break;
					aa[j] = 0;
					u[a[j]].b = 0;
					u[a[j]].w = 0;
				}
			}
		}
		for (int i = 1; i <= n; i++) {
			if (f[aa[i]] == 0) {
				s[aa[i]]++;
				f[aa[i]] = 1;
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << s[i] << ' ';
	}
	return 0;
}
