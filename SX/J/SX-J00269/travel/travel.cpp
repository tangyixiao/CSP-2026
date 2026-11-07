#include <bits/stdc++.h>
using namespace std;
int n = 4;
string ans;
char a, b;
string x, y;
int mj;
vector<char>s(n + 1);

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	for (int i = 1; i <= n; i ++) {
		cin >> s[i];
	}
	for (int i = 1; i <= n; i ++) {
		for (int j = 0; j < s.size(); j ++) {
			if (s[j] >= 'A' && s[j] <= 'F') {
				if (i == 2)
					a = s[j];
				else if (i == 4)
					b = s[j];
			} else if (s[j] >= '0' && s[j] <= '9') {
				if (i == 2)
					x += s[j];
				else(i == 4);
				y += s[j];
			}
		}
	}
	for (int i = 1; i <= n; i ++) {
		if (s[1] == s[3]) {
			ans += '1';
			continue;
		}
		if (x == y) {
			ans += '1';
			continue;
		}
		if (((a >= 'A' && a <= 'C') && (b >= 'A' && b <= 'C')) || ((a >= 'D' && a <= 'F') && (b >= 'D' && b <= 'F'))) {
			if (x == y) {
				ans += '1';
				continue;
			}
		}
		mj = abs(int(a) - int(b));
		if (x == y) {
			if (mj == 1 && ((a != 'C' && b != 'D') || (a != 'D' && b != 'C'))) {
				ans += '1';
				continue;
			}
		} else {
			ans += '0';
			continue;
		}
		x, y, mj = 0;
		a = ' ';
		b = ' ';
	}
	for (int i = 0; i < ans.size(); i ++) {
		cout << ans[i];
	}
	return 0;
}
