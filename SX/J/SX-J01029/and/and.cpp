#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int n, m;
	cin >> n;
	cin >> m;
	int  a[100005];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = n; i >= n; i--) {
		cout << a[i];
	}
	return 0;
}
