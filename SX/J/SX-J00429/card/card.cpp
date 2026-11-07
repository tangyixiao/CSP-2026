#include <bits/stdc++.h>
#define ll int
using namespace std;
const ll N = 5e5+10, M = 3e5+10;
ll t[M], n, m, arr[N], sum[M];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	for (int i = 1; i <= m; i++) {
		ll s = upper_bound(arr + 1, arr + n + 1, i) - arr;
		cout << s - 1 << " ";
	}
	return 0;
}
