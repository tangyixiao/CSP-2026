#include <bits/stdc++.h>
using namespace std;
long long l, n[10005], c, x;
string a, b;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> l;
	for (int i = 0; i < l; i++) {
		cin >> n[i] >> a[i];
	}
	long long z = l / 2, i = 0;
	while (i < l) {

		for (int j = x; j < n[i]; j++) {
			b[j] = a[i];
		}

		x = n[i];
		i++;
	}
	i = 0;
	while (i <= z) {
		if (b[i] != b[l - i])
			c++;
		i++;
	}
	cout << c;
	return 0;
}