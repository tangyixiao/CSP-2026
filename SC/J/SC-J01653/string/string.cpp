#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i <= (r); i ++ )
#define per(i, l, r) for(int i = (l); i >= (r); i -- )
#define frein(s) freopen(s, "r", stdin)
#define freout(s) freopen(s, "w", stdout)
#define endl '\n'
using namespace std;

static constexpr int N = 2e5 + 5;
static int n, s[N], lp, rp;
static long long ans;
char c[N];

int main() {
	frein("string.in"), freout("string.out");
	ios :: sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	rep(i, 1, n) cin >> s[i] >> c[i];
	lp = 1, rp = n;
	while(lp < rp) {
		if(s[lp] > s[rp]) {
			if(c[lp] != c[rp]) ans += s[rp];
			s[lp] -= s[rp];
			rp -- ;
		} else if(s[lp] < s[rp]) {
			if(c[lp] != c[rp]) ans += s[lp];
			s[rp] -= s[lp];
			lp ++ ;
		} else {
			if(c[lp] != c[rp]) ans += s[lp];
			lp ++ , rp -- ;
		}
	}
	cout << ans << endl;
	return 0;
}
//code by wsy_I. luogu uid: 1152799
