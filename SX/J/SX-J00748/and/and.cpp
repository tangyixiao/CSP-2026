#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define endl "\n"
using namespace std;
const int M = 2e5+10;
int n, m;
ll a[M], aa, aa1, aa2;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	fast;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		aa = max(aa, a[i]);
	}
	if (m == 1) {
		cout << aa;
	} else if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				aa1 = max(aa1, (a[i] & a[j]));
			}
		}
		cout << aa1;
	} else if (m == n) {
		aa2 = a[1];
		for (int i = 2; i <= n; i++) {
			aa2 = aa2 &a[i];
		}
		cout << aa2;
	}
	return 0;
}
