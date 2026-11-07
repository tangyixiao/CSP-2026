#include <bits/stdc++.h>
#define int long long
#define db double
#define fr(i,s,n) for(int i=s;i<=n;i++)
#define dn(i,s,n) for(int i=s;i>=n;i--)
#define please return
#define AC 0
using namespace std;

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int ans = 0, n, t;
	string s = " ";
	cin >> t;
	fr(i, 1, t) {
		int a;
		char c;
		cin >> a >> c;
		fr(j, 1, a)s += c;
	}
	n = s.size() - 1;
	fr(i, 1, n / 2) {
		int j = n - i + 1;
		if (s[i] != s[j])
			ans++;
	}
	cout << ans;
	please AC;
}