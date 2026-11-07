#include <bits/stdc++.h>
using namespace std;

int a, b, c[200005], d[200005], e[200005], cd;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> a >> b;
	for (int i = 2; i <= a + 1; i++) {
		cin >> c[i];
	}
	sort(c + 2, c + 2 + a);

	cout << c[a - 1];
	return 0;
}
