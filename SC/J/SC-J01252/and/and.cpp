#include <bits/stdc++.h>
#define ll long long
#define rep(i, j, k) for (int i = (j); i <= (k); i++)
#define per(i, j, k) for (int i = (j); i >= (k); i--)
#define F(i, j, k) for (ll i = (j); i <= (k); i++)
#define dF(i, j, k) for (ll i = (j); i >= (k); i--)
#define pii pair<int, int>
#define fi first
#define se second
#define pb push_back
#define _debug(x) cout << (#x) << " --> " << (x) << '\n';
using namespace std;

const int N = 2e5 + 5;
int a[N];

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	int n, m;
	cin >> n >> m;
	rep(i, 1, n) cin >> a[i];
	sort(a + 1, a + 1 + n, greater<int>());
	ll ans = LONG_LONG_MAX;
	rep(i, 1, m) {
		ans = ans & (ll)a[i]; 
	}
	cout << ans;
	
	return 0;
}

/*
4 2
3 15 12 12
*/
/*
5 3
31 3 1 15 7
*/