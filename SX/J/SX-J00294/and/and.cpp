#include <bits/stdc++.h>;
using namespace std;

long long a[1000000010];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int m, n;
	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}
	cout << a[m - 1 - m / 2];
	return 0;
}