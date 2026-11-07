#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, a, si, cnt, siz;
char c;
string s, t1, t2;

signed main(void) {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	while (n--) {
		cin >> a >> c;
		for (ll i = 1; i <= a; ++i)
			s += c;
	}
	siz = s.size();
	if (s.size() % 2 == 0)
		si = s.size() / 2 + 1 - 1;
	else
		si = s.size() / 2 + 2 - 1;
	for (ll i = 0; i <= siz / 2 - 1; ++i)
		t1 += s[i];
	for (ll i = siz - 1; i >= si; --i)
		t2 += s[i];
	for (ll i = 0; i <= siz / 2 - 1; ++i)
		if (t1[i] != t2[i])
			++cnt;
	cout << cnt;
	return 0;
}
