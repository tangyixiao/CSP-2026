#include <bits/stdc++.h>
using namespace std;
int c1, c2;
char s1[4], s2[4];
bool a[4];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> c1 >> s1 >> c2 >> s2;

	if (c1 == c2) a[0] = 1;
	if (a[0] && s1[0] == s2[0] && s1[1] == s2[1]) a[1] = 1;
	if (a[1]) a[2] = !((s1[2] <= 'C') ^ (s2[2] <= 'C'));
	if (a[2] && !((s1[2] == 'A' && s2[2] == 'C') || (s2[2] == 'A' && s1[2] == 'C'))) a[3] = 1;

	for (int i = 0; i < 4; ++i) {
		if (a[i]) cout << 1;
		else cout << 0;
	}
	return 0;
}
