#include <bits/stdc++.h>
using namespace std;
bool pan(string s) {
	int l = 0, r = s.size() - 1;
	while (l < r) {
		if (s[l] != s[r])
			return false;
		l++, r--;
	}
	return true;
}
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s = "";
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int x;
		char c;
		cin >> x >> c;
		for (int j = 1; j <= x; j++) {
			s += c;
		}
	}
	if (pan(s))
		cout << 0;
	else {
		int l = 0, r = s.size() - 1, ans = 0;
		while (l < r) {
			if (s[l] != s[r])
				ans++;
			l++, r--;
		}
		cout << ans;
	}
	return 0;
}
