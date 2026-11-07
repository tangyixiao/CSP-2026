#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, x, ans = 0;
	char c;
	string s, L, R;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x >> c;
		for (int j = 1; j <= x; j++)
			s += c;
	}
	long long l = s.size();
	for (int i = 0; i < l / 2; i++)
		L += s[i];
	for (int i = l - 1; i > l / 2; i--)
		R += s[i];
	if (l % 2 == 0)
		R += s[l / 2];
	for (int i = 0; i < L.size(); i++) {
		if (L[i] == R[i])
			continue;
		ans++;
	}
	cout << ans;
	return 0;
}
