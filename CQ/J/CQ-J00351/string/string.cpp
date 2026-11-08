#include<bits/stdc++.h>
#define int long long
using namespace std;
namespace hz {
	int n, a[200005];
	char c[200005];
	string s_[200005];
	string s = "";
	signed main() {
		freopen("string.in", "r", stdin);
		freopen("string.out", "w", stdout);
		cin >> n;
		int sum = 0;
		for (int i = 1; i <= n; i++) {
			cin >> a[i] >> s_[i];
			c[i] = s_[i][0];
			sum += a[i];
			
		}
		if (sum <= 1000000) {
//			int len = s.size();
//			s = " " + s;
			int ans = 0;
			for (int i = 1; i <= n; i++) {
				for (int j = 1; j <= a[i]; j++) {
					s += s_[i];
				}
			}
			for (int i = 0; i <= s.size() / 2; i++) {
				if (s[i] != s[s.size() - i - 1]) {
					ans++;
				}
			}
			cout << ans << endl;
			return 0;
		}
		int ans = 0, i = 1, j = n;
		while (i <= j) {
			int x = a[i];
			int sum = 0;
			while (x > 0 && i <= j) {
				x -= a[j];
				if (c[j] != c[i]) {
					ans += a[j];
				}
				j--;
			}
			if (x < 0) {
				j++, a[j] -= (0 - x);
				if (c[i] != c[j - 1]) ans -= (0 - x);
			}
			i++;
		}
		cout << ans << endl; 
		return 0;
	}
}
signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	hz::main();
	return 0;
}
