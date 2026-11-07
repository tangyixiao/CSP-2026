#include <bits/stdc++.h>
using namespace std;
int a, b, c[300005], d[1005], v[300005], t;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> a >> b;
	for (int i = 1; i <= a; i++) {
		cin >> c[i];
	}
	for (int i = a; i >= a - b; i--) {
		cout << c[i] << " ";
	}
	return 0;
}
