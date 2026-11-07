#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
int n, a[N], ct, ct1;
string s, c[N], so;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		ct += a[i];
		for (int j = 1; j <= a[i]; j++) {
			s += c[i];
		}
	}
	so = s;
	reverse(s.begin(), s.end());
	if (so == s) {
		cout << 0;
		return 0;
	}
	for (int i = 0; i < so.size(); i++) {
		ct1++;
		if (s[i] != so[i]) {

		}
		if (ct1 == floor(ct * 1.0 / 2)) {
			break;
		}
	}
	return 0;

}
