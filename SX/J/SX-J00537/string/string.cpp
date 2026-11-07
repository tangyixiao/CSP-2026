#include <bits/stdc++.h>
using namespace std;
int n, a[200010];
char m[200010];
string s;
long long ans;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> m[i];
		for (int j = 1; j <= a[i]; j++) {
			s += m[i];
		}
	}

	int l = 0, r = s.size() - 1;

	while (l < r) {
		if (s[l] != s[r]) {
			ans++;
		}
		l++;
		r--;
	}
	cout << ans;

	return 0;
}