#include <bits/stdc++.h>
using namespace std;

int n;
string s;
long long ans;
int main() {
	freopen("string.in", "r", stdin);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int a;
		char c;
		cin >> a >> c;
		for (int j = 1; j <= a; j++) {
			s = s + c;
		}
	}
	int l = 0, r = s.size() - 1;
	while (l <= r) {
		if (s[l] != s[r]) ans++;
		l++, r--;
	}
	freopen("string.out", "w", stdout);
	cout << ans;
	return 0;
}

