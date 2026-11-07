#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	vector<int>a;
	for (int i = 1; i <= n; i++) {
		int lzc;
		cin >> lzc;
		a.push_back(lzc);
	}
	cout << a[n - 1];
	return 0;
}