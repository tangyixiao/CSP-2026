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
ll a[N];
char c[N];

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	int n;
	cin >> n;
	ll len = 0; 
	rep(i, 1, n) {
		cin >> a[i] >> c[i];
		len += 1LL * a[i];
	}
	
	ll x = len / 2LL;
	int l = 0, r = n;
	ll cnt = 0;
	while (x && l <= r) {
		if (a[l] < a[r] && x > a[l]) {
			if (c[l] != c[r]) cnt = 1LL * a[l] + cnt;
			x = x - a[l];
			a[r] -= a[l];
			l++;
		}
		else if (a[l] > a[r] && x > a[r]) {
			if (c[l] != c[r]) cnt = 1LL * a[r] + cnt;
			x = x - a[r];
			a[l] -= a[r];
			r--;
		}
		else if (a[l] == a[r] && x > a[l]) {
			if (c[l] != c[r]) cnt = 1LL * a[l] + cnt;
			x = x - a[l];
			a[l] = a[r] = 0;
			l++;
			r--;
		}
		else if (x <= min(a[l], a[r])) {
			if (c[l] != c[r]) cnt = 1LL * x + cnt;
			x = 0;
		}
		if (a[l] == 0) l++;
		if (a[r] == 0) r--;
	}
	
	cout << cnt;
	
	return 0;
}
/*
3
2 a
2 b
1 c
*/

/*
2
2 a
3 a
*/

/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
//hhh