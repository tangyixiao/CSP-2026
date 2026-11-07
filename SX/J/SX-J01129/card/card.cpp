#include <bits/stdc++.h>
using namespace std;
int sum[100005];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		sum[a]++;
	}
	for (int i = 1; i <= m; i++) {
		sum[i] += sum[i - 1];
		cout << sum[i] << " ";
	}
	return 0;
}
