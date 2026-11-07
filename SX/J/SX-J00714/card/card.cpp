#include <bits/stdc++.h>
using namespace std;
int n, a[500005], m, ans, c[300005];
string s;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	memset(c, 1, sizeof(c));
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= a[i]; j++)
			c[j]++;
	}
	for (int i = 1; i <= m; i++)
		cout << c[i] << " ";
	return 0;
}
