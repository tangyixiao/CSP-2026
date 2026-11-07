#include <bits/stdc++.h>
using namespace std;

string c1, s1, c2, s2;
bool fl1, fl2, fl3, fl4;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	fl1 = (c1 == c2);
	fl2 = (s1.substr(0,2) == s2.substr(0,2) && fl1);

	if (s1[2] <= 'C' && s2[2] <= 'C') fl3 = fl2;
	else if (s1[2] >= 'D' && s2[2] >= 'D') fl3 = fl2;
	else fl3 = false;

	if (fl2 && fl3 && abs(s1[2]-s2[2]) == 1) fl4 = 1;

	cout << fl1 << fl2 << fl3 << fl4;
	return 0;
}
