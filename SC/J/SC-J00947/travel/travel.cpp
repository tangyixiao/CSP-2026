#include <bits/stdc++.h>

using namespace std;

string c1, s1, c2, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> c1 >> s1 >> c2 >> s2;
	if (s1[2] > s2[2])
		swap(s1[2], s2[2]);
	int mask = ((c1 == c2) << 0) |
					 ((s1[0] == s2[0] && s1[1] == s2[1]) << 1) |
					 ((s2[2] <= 'C' || s1[2] > 'C') << 2) |
					 ((s2[2] <= 'C' ? s2[2] - s1[2] == 1 : s1[2] == 'D' && s2[2] == 'F') << 3);
	for (int i = 0, pre = 1; i < 4; i++, mask /= 2)
		cout << (pre &= mask & 1);
	cout << '\n';
	return 0;
}
