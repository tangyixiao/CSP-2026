#include <bits/stdc++.h>
using namespace std;
int a[200001], b[32], ans;

bool cmp(int x, int y) {
	return x > y;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + n + 1, cmp);
	int t = a[1];
	for (int i = 1; i <= m; i++)
		t &= a[i];
	cout << t;
	return 0;
}