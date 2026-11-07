#include <bits/stdc++.h>
using namespace std;
int z;
long long n;
string a;
const int N = 2e9+10;
int num;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> z;
	while (z--) {
		int t;
		char c;
		cin >> t >> c;
		n += t;
		while (t--) {
			a += c;
		}
	}

	n -= 1;

	bool f = 1;
	for (int i = 0; i <= n / 2; i++) {
		if (a[i] == a[n - i] && f == 1)
			f = 1;
		else {
			f = 0;
		}
	}
	if (f == 1) {
		cout << 0;
		return 0;
	}
	for (int i = 0; i <= n / 2; i++) {
		if (a[i] != a[n - i]) {
			num++;
		}
	}
	cout << num;
	return 0;
}
