#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int a, b, c, d, e;
	cin >> a >> b;
	vector<int>s(a + 1);
	for (int i = 1; i <= a; i++) {
		cin >> s[i];
	}
	sort(s.begin(), s.end());
	cout << s[a - b + 1];

}
