#include <bits/stdc++.h>
using namespace std;
int n, m, w[200005], sum;
int maxx = -1;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> w[i];
	}
	sort(w + 1, w + n + 1);
	reverse(w + 1, w + n + 1);
	sum = w[1];
	for (int i = 2; i <= m; i++) {
		sum = sum &w[i];
	}
	cout << sum;


	return 0;
}