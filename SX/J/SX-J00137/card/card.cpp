#include <bits/stdc++.h>
using namespace std;
int n, m;
int card[500005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> card[i];
	int x = 8;
	for (int i = 1; i <= m; i++) {
		cout << x << " ";
		x -= 2;
	}
	return 0;
}
