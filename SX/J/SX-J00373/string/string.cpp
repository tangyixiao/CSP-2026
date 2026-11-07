#include <bits/stdc++.h>
using namespace std;
long long n, a[200005];
char c[200005];
string s = "";

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		for (int j = 1; j <= a[i]; j++) {
			s += c;
		}
	}
	if (n == 1) {
		cout << 0;
	}
	if (n == 2) {
		if (a[1] >= a[2])
			cout << a[2];
		else
			cout << a[1];
	} else {
		cout << n - 1;
	}
	return 0;
}
