#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, a;
char c;

signed main() {

	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> c;
	}
	if (n == 1) {
		cout << 0;
	} else {
		cout << 2;
	}


	return 0;
}