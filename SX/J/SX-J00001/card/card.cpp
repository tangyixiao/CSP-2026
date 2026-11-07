#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, m, a[500005], sum[300005];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	map<int, int> mp;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		mp[a[i]] = i;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			sum[a[j]]++;
			if (mp[a[j]] > j) {
				j = mp[a[j]];
			}
		}
	}
	for (int i = 1; i <= m; i++)
		cout << sum[i] << " ";
	return 0;
}