#include <bits/stdc++.h>
using namespace std;
string c1, c2, s1, s2;
bool q1, q2, q3, q4;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	q1 = (c1 == c2);
	q2 = q1 & (s1[0] == s2[0] && s1[1] == s2[1]);
	q3 = q1 & q2 & (((s1[2] >= 'D') && (s2[2] >= 'D')) || ((s1[2] < 'D') && (s2[2] < 'D')));
	q4 = q1 & q2 & q3 & ((int)s1[2] + 1 == (int)s2[2] || (int)s1[2] - 1 == (int)s2[2]);
	cout << (int)q1 << (int)q2 << (int)q3 << (int)q4;
	return 0;
}