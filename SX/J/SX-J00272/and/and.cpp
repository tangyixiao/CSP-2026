#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n;
	cin >> n;
	vector<int>a10(n + 1);
	vector<int>a2(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> a10[i];
		int ans = a10[i], m = 0;
		while (ans == 0) {
			m = ans % 2;
			ans /= 2;
			a2.push_back(m);
		}
		m = 0;
		ans = 0;
	}
	for (int i = 1; i <= n; i++) {
		cout << a2[i] << " ";
	}
	return 0;
}