#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IL inline
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define FIO(name) freopen(name".in", "r", stdin), freopen(name".out", "w", stdout);
#define pii pair<int, int>
#define fst first
#define snd second
#define lop(i, a, b) for (auto i = (a); i <= (b); i++)
#define pol(i, a, b) for (auto i = (a); i >= (b); i--)
#define asmax(a, b) ((a) = max((a), (b)))
#define asmin(a, b) ((a) = min((a), (b)))
const int N = 2e5 + 5;
int n, m;
ll a[N], pow2[32];
IL bool check (ll x, int k) {
	string s;
	while (x) {
		s += (char)(x % 2 + '0');
		x >>= 1;
	}
	if ((int)s.size() <= k) return false;
	else return s[k] == '1';
}
int main () {
	FIO("and");
	IOS;
	cin >> n >> m;
	lop(i, 1, n) cin >> a[i];
	pow2[0] = 1;
	lop(i, 1, 31) pow2[i] = pow2[i-1] * 2;
	vector<int> prv;
	lop(i, 1, n) prv.push_back(a[i]);
	ll ans = 0;
	pol(k, 30, 0) {
		int cnt = 0;
		vector<int> nxt;
		lop(i, 0, (int)prv.size()-1) if (check(prv[i], k)) nxt.push_back(prv[i]), cnt++;
		if (cnt >= m) {
//			lop(i, 0, (int)nxt.size()-1) cout << nxt[i] << ' '; cout << '\n';
			ans += pow2[k], swap(prv, nxt);
		}
	} cout << ans;
	return 0;
}