#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
	cin.tie(0)->sync_with_stdio(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	string s;
	s = ' ';
	for (int i = 1; i <= n; i++) {
		int a;
		string c;
		cin >> a;
		cin >> c;
		for (int i = 1; i <= a; i++) {
			s += c;
		}
	}
	int len = s.length() - 1;
	int erfen = len / 2;
	int ans = 0;
	for (int i = 1; i <= erfen; i++) {
		if (s[len - i + 1] != s[i]) {
			ans++;
		}
	}
	cout << ans;
}