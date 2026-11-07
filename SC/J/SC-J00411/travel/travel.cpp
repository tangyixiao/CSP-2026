#include <bits/stdc++.h>
#define ll long long 
using namespace std;
string c, cc, s, ss, answer[5];
bool fff = false, f = false, ff = false;
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c >> s >> cc >> ss;
	answer[0] = '0';
	answer[1] = '0';
	answer[2] = '0';
	answer[3] = '0';
	char ida = s[2], idb = ss[2];
	if (c == cc)
	{
		answer[0] = '1';
		f = true;
	}
	if (f && s[0] == ss[0] && s[1] == ss[1])
	{
		answer[1] = '1';
		ff = true;
	}
	if (ff && s[0] == ss[0] && s[1] == ss[1])
	{
		if (ida != 'E' && idb != 'E' && (ida <= 'C' && idb <= 'C') || (ida > 'C' && idb > 'C' && ida <= 'F' && idb <= 'F'))
		{
			answer[2] = '1';
			fff = true;
		}
	}
	if (fff && abs(int(ida) - int(idb)) == 1 && ((ida != 'C' && idb != 'D') || (idb != 'C' && ida != 'D')))
	{
		answer[3] = '1';
	}
	for (int i = 0; i <= 3; i++)
	{
		cout << answer[i];
	}
	return 0;
}