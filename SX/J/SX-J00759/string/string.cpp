#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, l = 0, o, ll = 0;
	char p;
	string a;
	cin >> n;
	for (long long i = 1; i <= n; i++) {
		cin >> o >> p;
		for (long long j = 1; j <= o; j++)
			a[l++] = p;
	}
	for (long long i = 0; i < l / 2; i++) {
		if (a[i] != a[l - i - 1]) {
			ll++;
			cout << i << a[i] << ' ' << l - i - 1 << a[l - i - 1] << '\n';
		}

	}
	cout << ll;
	return 0;
}
