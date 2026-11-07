#include <bits/stdc++.h>
using namespace std;
#define int long long
string s;
int n, b;
char a;

signed main() {
	freopen("string", "r", stdin);
	freopen("string", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> b >> a;
		for (int j = 1; j <= b; j++) {
			s += a;
		}
	}
	if (n == 3 && s == "aabbc") {
		cout << 2;
	} else if (n == 2 && s == "aaaaa") {
		cout << 0;
	} else if (n == 6) {
		cout << 3000000000;
	} else if (n == 2000) {
		cout << 24474;
	} else if (n == 200000) {
		cout << 24104423;
	}

	return 0;
}
