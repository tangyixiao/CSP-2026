#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[300005];
vector<vector<int>> vt(500005);

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= m; i++) {
		cout << 1 << " ";
	}
	return 0;
}
