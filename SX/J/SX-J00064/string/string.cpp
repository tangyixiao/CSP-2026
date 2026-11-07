#include <bits/stdc++.h>
#define int long long

using namespace std;

const int N = 1e6 + 10;

int h[N];
char g[N];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> h[i] >> g[i];
	}
//	for (int i = 1; i <= n; i++) {
//		cout << h[i] << g[i] << endl;
//	}
	int cnt = 0;
	int a = h[1];
	int b = h[n];
	int i = 1, j = n;
	while (i <= j) {
//		cout << x1 << " " << x2 << endl;
		if (g[i] == g[j]) {
			if (a > b) {
				a -= b;
				j--;
				b = h[j];
			} else if (a < b) {
				b -= a;
				i++;
				a = h[i];
			} else {
				i++;
				j--;
				a = h[i];
				b = h[j];
			}
		} else {
			if (a > b) {
				a -= b;
				cnt += b;
				j--;
				b = h[j];
			} else if (a < b) {
				b -= a;
				cnt += a;
				i++;
				a = h[i];
			} else {
				i++;
				j--;
				cnt += a;
				a = h[i];
				b = h[j];
			}
		}
	}
	cout << cnt << endl;
	return 0;
}
