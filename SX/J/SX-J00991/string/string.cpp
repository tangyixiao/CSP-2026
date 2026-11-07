#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, num = 0, ans = 0;
	cin >> n;
	string s;
	for (int i = 1; i <= n; i++) {
		int a;
		string b;
		cin >> a >> b;
		for (int j = 1; j <= a; j++) {
			s += b;
		}
		num += a;
	}
	for (int i = 0; i <= (num / 2 + num % 2) - 1; i++) {
		if (s[i] != s[num - i - 1]) {
			ans += 1;
		}
	}
	cout << ans ;
	return 0;
}
