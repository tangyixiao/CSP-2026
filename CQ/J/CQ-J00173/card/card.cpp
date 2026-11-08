#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int n, m;
int a[N], ans[N], last[N], k[N];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i], k[i] = 1;
	for (int i = n; i >= 1; i--)
		if (a[i] == a[i + 1])
			k[i] = k[i + 1] + 1;
	for (int i = n; i >= 1; i--)
		if (!last[a[i]])
			last[a[i]] = i;
	for (int i = 1; i <= n; i += k[i])
		for (int j = i; j <= n; j = last[a[j]] + 1)
			ans[a[j]] += k[i];
	for (int i = 1; i <= m; i++) cout << ans[i] << " ";
	return 0;
}
