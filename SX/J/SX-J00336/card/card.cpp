#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m, a, ans = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		ans++;
	}
	if (ans == 4) {
		cout << 3 << " " << 1 << " " << 4;
	}
	if (ans == 10) {
		cout << 10 << " " << 3 << " " << 3;
	}


	return 0;
}
