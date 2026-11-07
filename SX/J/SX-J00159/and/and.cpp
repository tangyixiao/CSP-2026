#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 2 * 1e5+5;
ll n, m, a[N];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	cout << a[n];
	return 0;
}
