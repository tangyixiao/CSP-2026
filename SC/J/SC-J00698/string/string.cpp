#include<bits/stdc++.h>

using namespace std;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, a, ans = 0;
	char c;
	string s;
	cin >> n;
	while (n--) {
		cin >> a >> c;
		for (long long i = 0; i <= a; i++) {
			s += c;
		}
	}
	for (long long i = 0; i < s.size() / 2 - 1; i++) {
		if (s[i] != s[s.size() - i - 1]) {
			ans++;
		}
	}
	cout << ans;

	return 0;
}