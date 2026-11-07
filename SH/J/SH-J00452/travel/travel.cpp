#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) cout << 1;
	else
	{
		cout << "0000";
		return 0;
	}
	if (s1[0]+s1[1] == s2[0]+s2[1]) cout << 1;
	else
	{
		cout << "000";
		return 0;
	}
	bool z1, z2;
	if (s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') z1 = 0;
	else z1 = 1;
	if (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C') z2 = 0;
	else z2 = 1;
	if (z1 == 1 && z2 == 1) cout << 11;
	else if (z1 == 0 && z2 == 0)
	{
		cout << 1;
		if (s1[2] == 'B' || s2[2] == 'B') cout << 1;
		else cout << 0;
	}
	else cout << "00";
	return 0;
}
