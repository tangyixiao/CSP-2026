#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i,a,b) for(int i=a;i<=b;i++)
int a[200010];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, sum = 0;
	cin >> n;
	string s;
	fr(i, 1, n) {
		string ss;
		cin >> a[i] >> ss;
		fr(j, 1, a[i])
		s += ss;
		sum += a[i];
	}
	s = " " + s;
	int len = s.size() - 1;
	if (len % 2 == 1) {
		int m = (len + 1) / 2, ans = 0;
		fr(i, 1, m - 1) {
			if (s[m - i] != s[m + i])
				ans++;
		}
		cout << ans;
		return 0;
	} else {
		int m = len / 2, ans = 0;
		fr(i, 1, m) {
			if (s[m - i + 1] != s[m + i])
				ans++;
		}
		cout << ans;
		return 0;
	}
	return 0;
}
