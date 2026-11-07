#include <bits/stdc++.h>
using namespace std;
const int Maxn = 2e5+3;
int c[Maxn];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int a, b, ans = 0;
	cin >> a >> b;
	for (int i = 1; i <= a; i++) {
		cin >> c[i];
	}
	sort(c + 1, c + 1 + a);
	if (b == 1) {
	}
	cout << c[a];
	return 0;
}
