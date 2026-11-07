#include <bits/stdc++.h>
using namespace std;

const int N = 5e5 + 10, M = 20;
int a[N], ans[N];
bool ok[N];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false), cin.tie(0);
	int n, m;
	cin >> n >> m;
	vector<int> tot(N);
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		ans[a[i]]++;
	}
	ans[a[n]] = n;
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
	cout << "\n";
	return 0;
}