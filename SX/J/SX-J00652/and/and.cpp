#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m, a[200005], sum, mymax;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sum = a[1];
	if (m == 1) {
		sort(a + 1, a + n + 1);
		cout << a[n];
		return 0;
	}
	if (m == n) {
		for (int i = 2; i <= m; i++)
			sum &= a[i];
		cout << sum;
		return 0;
	}
	if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (j != i)
					mymax = max(mymax, (a[i] & a[j]));
			}
		}
		cout << mymax;
		return 0;
	}
	return 0;
}
