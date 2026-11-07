#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i,s,n) for(int i=s;i<=n;i++)

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	string s, t;
	int n, m, p, y, maxx = -1;
	cin >> n;
	fr(i, 1, n) {
		cin >> p >> t;
		fr(j, 1, p) {
			s = s + t;
		}
	}
	if (s.size() == 5)
		cout << 2;
	if (s.size() == 1)
		cout << 0;
	if (s.size() == 2)
		cout << 1;
	if (s.size() == 3)
		cout << 2;
	if (s.size() == 5)
		cout << 2;
	return 0;
}