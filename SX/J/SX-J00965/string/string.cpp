#include <bits/stdc++.h>
using namespace std;
long long a[200020];
char c[200020];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	long long s = 0, b = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	b = n;
	for (int i = 1; i <= n / 2; i++) {
		if (c[i] == c[b]) {
			if (a[i] >= a[b]) {
				a[i] = a[i] - a[b];
				i--;
			} else {
				a[b] = a[b] - a[i];
				b++;
			}
		} else {
			if (a[i] >= a[b]) {
				a[i] = a[i] - a[b];
				i--;
				s = s + a[b];
			} else {
				a[b] = a[b] - a[i];
				b++;
				s = s + a[i];
			}
		}
		b--;
	}
	cout << s;
	return 0;
}