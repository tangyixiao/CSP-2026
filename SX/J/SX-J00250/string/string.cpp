#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
string s = "";

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//使用上面这个的时候
	//不要用C语言的输入输出
	//不要用endl，换成"\n"
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int tmp;
		char c;
		cin >> tmp >> c;
		while (tmp--) {
			s += c;
		}
	}
	int lg = s.size();
	int ans = 0;
	for (int l = 0, r = lg - 1; l <= lg / 2 - 1 && r >= lg / 2; l++, r--) {
		if (s[l] != s[r]) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}