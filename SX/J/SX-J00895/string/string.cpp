#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, sum = 0;
	cin >> n;
	for (int i = 1 ; i <= n ; i++) {
		int a;
		char b;
		cin >> a >> b;
		sum += a;

	}
	cout << sum / 2;
	return 0;
}
