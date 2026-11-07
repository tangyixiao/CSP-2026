#include <bits/stdc++.h>
using namespace std;
int a[200005], n;
int b[200005];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	if (n > 1000)
		return 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			ans = max(a[i] & a[j], ans);
		}
	}
	cout << ans;
	return 0;
}
