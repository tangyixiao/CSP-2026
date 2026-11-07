#include <bits/stdc++.h>
using namespace std;
long long n, x, l, r, ans;
string s;
char a;

int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (long long i = 1; i <= n; i++) {
		cin >> x >> a;
		for (long long j = 1; j <= x; j++) {
			s = s + a;
		}
	}
	long long len = s.size();
	r = len - 1;
	while (l <= r) {
		if (s[l] != s[r]) {
			ans++;
		}
		l++;
		r--;
	}
	cout << ans;
	return 0;
}
