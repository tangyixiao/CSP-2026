#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 4e5+66;
ll n, m, a[N], l[N], r[N];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + n + 1);
	for (int i = 1; i <= m; i++) {
		cout << a[i];
	}
	return 0;
}
