#include <bits/stdc++.h>
using namespace std;

string w1[200005] = {};

string v(string a, string b) {
	if (a.length() - b.length() > 0)
		return a;
	else if (a.length() - b.length() < 0)
		return b;
	else {
		for (int q = 0; q < a.length(); q++) {
			if (a[q] > b[q])
				return a;
			else if (a[q] < b[q])
				return b;
		}
	}
	return a;
}
bool cmp(string a, string b) {
	return a == v(a, b);
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;

	cin >> n >> m;
	for (int q = 1; q <= n; q++) {
		cin >> w1[q];

	}
	sort(w1 + 1, w1 + n + 1, cmp);
	cout << w1[m];
	return 0;
}
