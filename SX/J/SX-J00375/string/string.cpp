#include <bits/stdc++.h>
using namespace std;

struct st {
	long long a;
	char c;
} s[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, cnt = 0, ans = 0, t = 1;
	string s2;
	cin >> n;
	cin >> s[1].a >> s[1].c;
	cnt += s[1].a;
	for (int i = 1; i <= s[1].a; i++) {
		s2[i] = s[1].c;
		t++;
	}
	for (int i = 2; i <= n; i++) {
		cin >> s[i].a >> s[i].c;
		cnt += s[i].a;
		int y = 0;
		for (int x = t; x <= s[i].a + t - 1 ; x++) {
			s2[x] = s[i].c;
			y++;
		}
		t += y;
	}
	for (int i = 1; i <= cnt / 2; i++) {
		if (s2[i] != s2[cnt + 1 - i]) {
			ans += 1;
		}
	}
	cout << ans;
	return 0;
}
