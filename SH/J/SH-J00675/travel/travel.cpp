#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin >> a >> b >> c >>d;
	if (a == c)
	{
		cout << 1;
		int x = b[2] - 'A';
		int y = d[2] - 'A';
		int m = (b[0] - '0') * 10 + (b[1] - '0');
		int n = (d[0] - '0') * 10 + (d[1] - '0');
		if (m == n)
		{
			cout << 1;
			if ((x == 0 && y == 1) || (x == 1 && y == 0) || (x == 1 && y == 2) || (y == 1 && x == 2) || (x == 0 && y == 2) || (y == 0 && x == 2) || (x == 3 && y == 4) || (x == 4 && y == 3))
			{
				cout << 1;
				if ((b[2] == 'A' && d[2] == 'B') || (d[2] == 'A' && b[2] == 'B') || (b[2] == 'B' && d[2] == 'C') || (d[2] == 'B' && b[2] == 'C') || (b[2] == 'D' && d[2] == 'E') || (d[2] == 'D' && b[2] == 'E'))
					cout << 1;
				else
					cout << 0;
			}
			else
				cout << "00";
		}
		else
			cout << "000";
	}
	else 
		cout << "0000";
	return 0;
}
