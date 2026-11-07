#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	long long n, m, o, p = -1;
	cin >> n >> m;
	for (long long i = 1; i <= n; i++) {
		cin >> o;
		if (o != p)
			cout << o;
		p = o;
	}
	return 0;
}
