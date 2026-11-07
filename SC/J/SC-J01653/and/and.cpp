#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i <= (r); i ++ )
#define per(i, l, r) for(int i = (l); i >= (r); i -- )
#define frein(s) freopen(s, "r", stdin)
#define freout(s) freopen(s, "w", stdout)
#define endl '\n'
using namespace std;

const int N = 2e5 + 5;
int n, m, a[N], ans;
bool ok[N];

int main() {
	frein("and.in"), freout("and.out");
	ios :: sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	rep(i, 1, n) cin >> a[i];
	memset(ok, true, sizeof ok);
	per(i, 29, 0) {
		int su = 0;
		rep(j, 1, n) if(ok[j]) su += ((a[j] >> i) & 1);
		if(su >= m) {
			ans |= (1 << i);
			rep(j, 1, n) ok[j] &= ((a[j] >> i) & 1);
		}
	}
	cout << ans << endl;
	return 0;
}
//code by wsy_I. luogu uid: 1152799