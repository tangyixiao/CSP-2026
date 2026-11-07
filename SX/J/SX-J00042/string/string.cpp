#include <bits/stdc++.h>
using namespace std;
long long a, e;
long long n, f;
string c, d, b;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> n;
	for (long long i = 1; i <= n; i++) {
		cin >> a >> c;
		d = c;
		for (long long j = 1; j < a; j++) {
			d = d + c;
		}

		b = b + d;
		e += a;
	}
	for (long long i = 0; i <= e / 2; i++) {
		if (b[i] != b[e - 1 - i]) {
			f++;
		}
	}
	cout << f;
	return 0;
}
