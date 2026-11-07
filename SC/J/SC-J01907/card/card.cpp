#include <bits/stdc++.h>

using namespace std;
const int SZ = 5e5 + 5;

int n, m;
int a[SZ], lst[SZ], cnt[SZ];
int res[SZ];

int main () {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		lst[a[i]] = i;
	}
	
	for (int i = 1; i <= n; i++) {
		cnt[i]++;
		cnt[lst[a[i]] + 1] += cnt[i];
		res[a[i]] += cnt[i];
	}
	
	for (int i = 1; i <= m; i++) 
		cout << res[i] << ' ';
	return 0;
}