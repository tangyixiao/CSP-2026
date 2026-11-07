#include <bits/stdc++.h>
using namespace std;

int main() {

	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, cnt = 0;
	cin >> n;
	int a[1000];
	string c[1000];
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		string s = c[i] + c[i];
	}
	for (int i = 1; i <= n; i++) {
		if (c[i].size() >= c[n].size() && c[i] != c[n]) {
			c[i] = c[n];
			cnt++;
		} else if (c[i].size() <= c[n].size() && c[i] != c[n]) {
			c[n] = c[i];
			cnt++;
		}
	}

	cout << cnt;
	return 0;
}
