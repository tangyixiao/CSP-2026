#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
bool a[5];
int se1, se2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	se1 = (c1[0] - '0') * 10 + (c1[1] - '0');
	se2 = (c2[0] - '0') * 10 + (c2[1] - '0');
	if (se1 == se2)
		a[1] = 1;

	se1 = (s1[0] - '0') * 10 + (s1[1] - '0');
	se2 = (s2[0] - '0') * 10 + (s2[1] - '0');
	if (a[1] == 1 && se1 == se2)
		a[2] = 1;

	char w1 = s1[2], w2 = s2[2];
	if (a[2] == 1 && ((w1 <= 'C' && w2 <= 'C') || (w1 >= 'D' && w2 >= 'D') ))
		a[3] = 1;

	if (a[3] == 1 && (abs(w1 - w2) == 1))
		a[4] = 1;
	cout << a[1] << a[2] << a[3] << a[4];
	return 0;
}
