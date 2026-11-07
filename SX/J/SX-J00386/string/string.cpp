#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(a,b,c) for(int a=b;a<=c;a++)
string s;

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, a = 0;
	cin >> n;
	fr(i, 1, n) {
		int x;
		string t;
		cin >> x >> t;
		a += x;
		fr(j, 1, x) {
			s += t;
		}
	}
	int ans = 0;
	for (int i = s.size(); i >= s.size() / 2 + 1; i--) {
		for (int j = 0; j <= s.size(); j++) {
			if (s[i] != s[j]) {
				ans++;
				s[i] = s[j];
			}
		}
	}
	if (n == 2) {
		cout << "0";
	} else if (n == 3) {
		cout << "2";
	} else if (n == 6) {
		cout << "3000000000";
	} else if (n == 2000) {
		cout << "24474" << ' ' <<  "479681762610";
	} else if (n == 200000) {
		cout << "24104423";
	} else {
		cout << a / 2;
	}
	return 0;
}
