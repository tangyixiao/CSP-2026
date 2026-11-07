#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m, a[1000005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	cout << a[n - m + 1];
	return 0;
}
//5 3
//31 3 1 15 7