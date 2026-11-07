#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[200005];

bool cmp(int x, int y) {
	return x > y;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + n + 1, cmp);
	ll arr = a[1];
	for (int i = 2; i <= m; i++)
		arr = arr & a[i];
	cout << arr;
	return 0;
}
