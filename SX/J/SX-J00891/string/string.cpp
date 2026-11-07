#include <bits/stdc++.h>
using namespace std;
int a[200000000], f[200000000];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int b, c, e = 0, sum = 0;
	char d;
	cin >> b;
	for (int i = 1; i <= b; i++) {
		cin >> c >> d;
		for (int j = 1; j <= c; j++) {
			a[e] = d;
			e++;
		}
	}
	for (int i = 0; i <= e; i++) {
		f[i] = a[e - i];
	}
	for (int i = 0; i <= (e + 1) / 2; i++) {
		if (f[i] != a[i]) {
			sum++;
		}
	}
	cout << sum;
	return 0;
}
