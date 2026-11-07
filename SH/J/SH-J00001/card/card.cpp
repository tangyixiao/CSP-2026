#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[500005];
int low[300005];
vector<int> g[300005];
int main() {
	freopen("card.in", "r", stdin);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		low[a[i]] = i;
	}
	freopen("card.out", "w", stdout);
	for (int i = 1; i <= m; i++) {
		cout << low[i] << " ";
	}
	return 0;
}

