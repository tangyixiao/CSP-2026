#include <bits/stdc++.h>

using namespace std;

#define int long long

string c1, s1, c2, s2;
int x, y;

signed main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	x = (s1[0] - '0') * 10 + (s1[1] - '0');
	y = (s2[0] - '0') * 10 + (s2[1] - '0');
	if(c1 == c2)
	{
		cout << 1;
		if(x == y)
		{
			cout << 1;
			if(((s1[2] >= 'A') && (s1[2] <= 'C') && (s2[2] >= 'A') && (s2[2] <= 'C')) || ((s1[2] == 'D') && (s2[2] == 'F')) || ((s1[2] == 'F') && (s2[2] == 'D')))
			{
				cout << 1;
				if((abs(s1[2] - s2[2]) == 1) || ((s1[2] == 'D') && (s2[2] == 'F')) || ((s1[2] == 'F') && (s2[2] == 'D')))
				{
					cout << 1;
				}
				else cout << 0;
			}
			else cout << "00";
		}
		else cout << "000";
	}
	else cout << "0000" << '\n';
	return 0;
}
