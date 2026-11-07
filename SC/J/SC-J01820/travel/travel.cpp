#include <bits/stdc++.h>
//#define int long long
using namespace std;
string c1, c2, c3, c4;
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("travel.in", "r", stdin);	
	freopen("travel.out", "w", stdout);
	cin >> c1 >> c2 >> c3 >> c4;
	if(c1 == c3)
	{
		cout << "1";
		if(c2.substr(0, 2) == c4.substr(0, 2))
		{
			cout << "1";
			bool a = (int(c2[2]) >= 65 && int(c2[2]) <= 67) && (int(c4[2]) >= 65 && int(c4[2]) <= 67);
			bool b = (int(c2[2]) >= 68 && int(c2[2]) <= 69) && (int(c4[2]) >= 68 && int(c4[2]) <= 69);
			if(a || b)
			{
				cout << "1";
				int x = int(c2[2]), y = int(c4[2]);
				int num = abs(x - y);
				if(num == 1)
				{
					cout << "1";
				}
				else
				{
					cout << "0";	
				}
			}
			else
			{
				cout << "00";
			}
		}
		else
		{
			cout << "000";
		}
	}
	else
	{
		cout << "0000";
	}
	return 0;
}