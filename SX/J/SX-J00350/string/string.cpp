#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, a, a1[20000005], cnt, a2[20000005], sum, c1 = 1, c2 = 1, ans, x; //a:每个字符的终点
char c;
string s, ss;

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> c;
		for (int j = 1; j <= a; j++) {
			cnt++;
			s[cnt] = a;

		}
	}
	for (int i = 1; i <= cnt; i++) {
		ss[cnt - i + 1] = a;
	}
	for (int i = 1; i <= cnt / 2; i++) {
		if (s[i] != ss[i]) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}