#include <bits/stdc++.h>
#define FILE(s) freopen(s".in","r",stdin), freopen(s".out","w",stdout)
#define DEBUG(s) freopen(s".err","w",stderr)
#define CloseFILE fclose(stdin), fclose(stdout)
#define CloseDEBUG fclose(stderr)
#define int long long
#define endl "\n"
using namespace std;

constexpr int MAXN = 2e5+5;
int n, L, r, ans, a[MAXN];
char c[MAXN];
string s;

signed main() {
	FILE("string"), DEBUG("string");
	cin.tie(0) -> sync_with_stdio(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		L += a[i];
		for (int j = 1; j <= a[i]; j++) {
			s += c[i];
		}
	}
	s = " " + s;
	for (int i = 1; i <= L/2; i++) {
		if (s[i] != s[L-i+1]) ans++;
	}
	cout << ans << endl;
//	CloseFILE, CloseDEBUG;
	return 0;
}
// T2 是如何把我憋炸的？ 
