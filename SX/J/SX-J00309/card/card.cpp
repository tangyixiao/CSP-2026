#include <bits/stdc++.h>
using namespace std;
int n, m, sum[500005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		sum[a]++;
	}
	for (int i = 2; i <= m; i++) {
		sum[i] += sum[i - 1];
		cout << sum[i] << " ";
	}

	return 0;
}
