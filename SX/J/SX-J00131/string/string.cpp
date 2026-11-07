#include <bits/stdc++.h>
#define int long long
#define fr(i,a,b) for(int i=a;i<=b;i++)
using namespace std;

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int  n, a, cnt = 0, ans = 0;
	string s;
	string c;
	cin >> n;
	fr(i, 1, n) {
		cin >> a >> c;
		fr(i, 1, a)
		s +=  c;
	}
	int l = 0, r = s.size() - 1;
	for (int i = 0; i < s.size() / 2; i++) {
		if (s[l] != s[r]) {
			s[r] = s[l];
			cnt++;
		}
		l++;
		r--;
	}
	cout << cnt;
	return 0;
}
