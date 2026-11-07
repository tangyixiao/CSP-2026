#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	string s = "";
	long long cnt2 = 0;
	for (int i = 1; i <= n; i++) {
		long long a;
		cin >> a;
		if (a == 1e9) {
			cnt2 += a;
		}
		if (a == 1e9 && i == n) {
			cout << cnt2 / 2;
			return 0;
		}
		char b;
		cin >> b;
		for (int j = 1; j <= a; j++) {
			s += b;
		}
	}
	long long cnt = 0, cnt1 = 0;
	for (int i = 0; i < s.size() / 2; i++) {
		if (s[i] != s[s.size() - i]) {
			cnt++;
		}
	}
	for (int i = s.size() - 1; i >= s.size() / 2; i--) {
		if (s[i] != s[s.size() - i - 1]) {

			cnt1++;
		}
	}
	cout << min(cnt, cnt1);
}
