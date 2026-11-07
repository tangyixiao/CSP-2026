#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string", "r", stdin);
	freopen("string", "w", stdout);
	int n, m, q = 0;
	string p;
	cin >> n ;
	for (int i = 1; i <= n; i++) {
		cin >> m >> p;
		q += m;
	}
	cout << q / 2;
	return 0;
}