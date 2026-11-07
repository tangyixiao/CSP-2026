#include <bits/stdc++.h>
using namespace std;
string c1, c2, s1, s2;
bool f1, f2, f3, f4;
bool f[6];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	c1 == c2 ? f1 = 1 : f1 = 0;

	string ss1 = s1, ss2 = s2;
	ss1[ss1.size() - 1] = 'X';
	ss2[ss2.size() - 1] = 'X';
	(ss1 == ss2 && f1) ? f2 = 1 : f2 = 0;

	long long a = (s1[s1.size() - 1] - 'A' + 1), b = (s2[s2.size() - 1] - 'A' + 1);
	f[a] = 1, f[b] = 1;
	((f[1] + f[2] + f[3] == 2 || f[4] + f[5] == 2) && f1 && f2) ? f3 = 1 : f3 = 0;
	(f1 && f2 && f3 && abs(a - b) == 1) ? f4 = 1 : f4 = 0;
	cout << f1 << f2 << f3 << f4;

	return 0;
}




















