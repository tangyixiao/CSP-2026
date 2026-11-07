#include <bits/stdc++.h>

using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	
	int n; cin >> n;
	long long len = 0;
	vector<long long> a(n + 1, 0), s(n + 1, 0);
	vector<char> c(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		len += a[i];
		if (i > 1 && c[i] == c[i - 1]) {  
			n--; a[i - 1] += a[i]; i--;
			s[i] += a[i + 1];
		} else s[i] = s[i - 1] + a[i];
	}
		
	long long l = 1, r = len, ans = 0;
	int i = 1, j = n;
	while (l < r) {
		long long llft = s[i] + 1 - l, rlft = r - s[j - 1];
		if (c[i] != c[j]) ans += 1ll * min(llft, rlft);
		if (llft > rlft) {
			l += rlft; r = s[--j];
		} else if (llft < rlft) {
			r -= llft; l = s[i++] + 1;
		} else {
			l = s[i++] + 1; r = s[--j];
		}
	}
	
	cout << ans << endl;
	return 0;
}