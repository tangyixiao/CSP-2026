#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, m, a[200010], zdz;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (ll i = 1; i <= n; i++) {
		cin >> a[i];
		zdz = max(a[i], zdz);
	}
	cout << zdz;
	return 0;
}