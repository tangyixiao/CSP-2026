#include <bits/stdc++.h>
using namespace std;
long long a, b, c[500005], d[300005], f[300005], e;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> a >> b;
	for (int k = 1; k <= a; k++) {
		cin >> c[k];
	}
	for (int j = 1; j <= a; j++) {
		for (int i = j; i <= a; i++) {
			f[c[i]]++;
		}
	}
	for (int i = 1; i <= b; i++) {
		cout << f[i] << " ";
	}
	return 0;
}