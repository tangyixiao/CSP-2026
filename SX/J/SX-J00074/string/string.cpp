#include <bits/stdc++.h>
using namespace std;
long long n;
long long a[200005];
char c;
string s;
long long ans;

int main() {

	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c;
		for (int j = 1; j <= a[i]; j++) {
			s += c;
		}
	}
	for (int i = 0; i < s.length() / 2; i++) {
		long long l = i, r = s.length() - 1;
		if (s[l] != s[r])
			ans++;
		r--;
	}
	cout << ans;

	return 0;
}
