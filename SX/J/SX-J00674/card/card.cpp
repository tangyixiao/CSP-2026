#include <bits/stdc++.h>
using namespace std;
const int N = 3e5+5;
map<int, int> mp;
int T[N];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int a[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		mp[a[i]] = i;
	}
	for (int i = 1; i <= m; i++)
		cout << mp[i] << ' ';
	return 0;
}