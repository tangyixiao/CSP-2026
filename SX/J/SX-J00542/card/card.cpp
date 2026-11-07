#include <bits/stdc++.h>
using namespace std;

int t[300005] = {0};
string a[500005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	string s = "";
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		cout << m - 1 << 1 << m;
	}
	return 0;
}