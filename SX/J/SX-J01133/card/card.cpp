#include <bits/stdc++.h>
using namespace std;
int a[500100], b[500100];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		vector<int> c;
		for (int k = i; k <= n; k++) {
			int sum = 0;
			int pd = false;
			for (auto item : c) {
				sum++;
				if (item == a[k]) {
					pd = true;
					break;
				}
			}
			if (pd) {
				for (int j = k - i ; j >= sum; j--) {
					c.pop_back();
				}
			}
			c.push_back(a[k]);
		}
		for (auto item : c) {
			b[item]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << b[i] << " ";
	}
	return 0;
}
