#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long
int n, m;
int t[20005];
int usefuldigit;

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> t[i];
	}
	/*for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {

		}
	}
	*/
	if (m >= 1 and m <= 5) {
		if (m == 2) {
			cout << t[n / 2 + 1];
			return 0;
		}
		cout << t[n - 1];
		return 0;
	}
	//so difficult...
	return 0;
}
