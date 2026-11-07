#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 5e5+5;
ll n, m, a[N], ans;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int j = 1; j <= n; j++) {
		for (int i = j; i < n; i++) {
			ans = a[i];
			if (a[i + 1] == ans)
				a[i] = 0;
		}
		cout << ans;
	}
	return 0;
}
