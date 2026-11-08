#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll l, ans;
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> l;
	for (int i = 1; i <= l; i++) {
		int a;
		char c;
		cin >> a >> c;
		for (int j = 1; j <= a; j++) {
			s += c;
		}
	}
	ll L, R, n = s.size();
	if (n & 1) L = n / 2 - 1, R = L + 2;
	else L = n / 2 - 1, R = L + 1;
	while (L >= 0 && R <= n - 1) {
		if (s[L] != s[R]) ans++;
		L--, R++;
	}
	cout << ans << '\n';
	return 0;
}
