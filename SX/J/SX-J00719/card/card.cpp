#include <bits/stdc++.h>
using namespace std;
long long a[500005], s[500005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		s[i] = s[i - 1] + 1;
	}
	for (int i = 1; i <= m; i++) {
		cout << s[i] << " ";
	}
	return 0;
}
