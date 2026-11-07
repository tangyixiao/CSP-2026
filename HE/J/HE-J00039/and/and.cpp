#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//50f
const int maxn = 3e3 + 5;

ll n, m;
ll a[maxn];
ll f[maxn][maxn];
ll ans; 

bool a1 = 1; 

int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] != i - 1) a1 = 0;
	}
	sort(a + 1, a + n + 1);
	if (n > 3000) {
		if (a1) {
			cout << n - m;
			return 0;
		}
		else cout << a[n - m + 1];
		return 0;
	}
	for (int i = 1; i <= n; i++) f[i][1] = max(f[i - 1][1], a[i]);
	for (int i = 2; i <= n; i++) {
		for (int j = 2; j <= n; j++) {
			f[i][j] = max(f[i - 1][j], (f[i - 1][j - 1] & a[i]));//选或不选 
		}
	}
	for (int i = 1; i <= n; i++) {
		ans = max(ans, f[i][m]);
	}
	cout << ans;
	return 0;
}
