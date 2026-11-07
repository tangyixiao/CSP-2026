#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool bo[4];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int a, b, c, d;
	string s, t;

	cin >> a >> s >> b >> t;
	c = (s[0] - '0') * 10 + s[1] - '0';
	d = (t[0] - '0') * 10 + t[1] - '0';
	char s1 = s[2], t1 = t[2];
	if (a == b) {
		bo[0] = 1;
		if (c == d) {
			bo[1] = 1;
			if ((s1 <= 'C' && t1 <= 'C') || (s1 >= 'D' && t1 >= 'D')) {
				bo[2] = 1;
				if (abs(s1 - t1) == 1) {
					bo[3] = 1;
				}
			}
		}
	}
	cout << bo[0] << bo[1] << bo[2] << bo[3];
	return 0;
}