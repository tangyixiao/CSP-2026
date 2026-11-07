#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m, a[6000], ans;
	cin >> n >> m;
	ans = n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++) {

		for (int j = i + 1; j <= n; j++)
			if (a[j] == a[j - 1])
				ans = n - j;
			else
				ans = n - i;
		cout << ans + 1 << " ";
		ans = 0;
	}


	return 0;
}
