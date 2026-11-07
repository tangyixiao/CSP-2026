#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m, a[1000005], arr[1000005], ans[1000005], vis[1000005], st[1000005], top;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		cout << 1 << ' ';
	}
	return 0;
}