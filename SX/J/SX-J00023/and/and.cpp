#include <bits/stdc++.h>
using namespace std;
#define int long long
int num[200005];

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	//zheshishameijianguo
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> num[i];
	cout << num[n];
	return 0;
}