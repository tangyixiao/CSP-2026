#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i,a,b) for(int i=a;i<=b;i++)
#define fd(i,a,b) for(int i=a;i>=b;i--)

bool hw(string s) {
	for (int i = 0, j = s.size() - 1; i <= j; i++, j--)
		if (s[i] != s[j])
			return 0;
	return 1;
}

signed main() {
	freopen("string.in", "w", stdin);
	freopen("string.out", "r", stdout);
	int n, x, ans = 0;
	cin >> n;
	char p;
	string s = "";
	fr(i, 1, n) {
		cin >> x >> p;
		fr(j, 1, x) {
			s += p;
		}
	}
	int l = s.size();
	fd(i, l - 1, 0) {
		if (hw(s) == 1)
			break;
		ans++;
		s[i] = s[l - 1 - i];
	}
	cout << ans;
	return 0;
}
