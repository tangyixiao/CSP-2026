#include <bits/stdc++.h>
using namespace std;
int n;
long long a[200010];
char c;
string s;
string t;
long long ans;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
		cin >> c;
		while (a[i]--) {
			t += c;
		}
	}
	s = t;
	reverse(t.begin(), t.end());
	long long len = s.size();
	int l = 0, r = len - 1;
	while (l < r) {
		if (s[l] != s[r]) {
			s[r] = s[l];
			ans++;
		}
		l++;
		r--;
	}
	cout << ans;
	return 0;
}