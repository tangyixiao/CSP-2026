#include <bits/stdc++.h>
using namespace std;

string a, b, c, d;
long long x, y;//在哪个车厢
long long xx, yy;//在哪一排
char xxx, yyy;//在每一排的座位序列

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	x = a[1] - '0' + (a[0] - '0') * 10;
	y = c[1] - '0' + (c[0] - '0') * 10;
	xx = b[1] - '0' + (b[0] - '0') * 10;
	yy = d[1] - '0' + (d[0] - '0') * 10;
	xxx = b[2];
	yyy = d[2];
	if(x != y)
	{
		cout << 0 << 0 << 0 << 0;
	}
	else
	{
		cout << 1;
		if(xx != yy)
		{
			cout << 0 << 0 << 0;
		}
		else
		{
			cout << 1;
			if((xxx >= 'A' && xxx <= 'C' && !(yyy >= 'A' && yyy <= 'C')) || (yyy >= 'A' && yyy <= 'C' && !(xxx >= 'A' && xxx <= 'C')))
			{
				cout << 0 << 0;
			}
			else
			{
				cout << 1;
				if((xxx != yyy + 1) && (yyy != xxx + 1))
				{
					cout << 0;
				}
				else
				{
					cout << 1;
				}
			}
		}
	}
	return 0;
}
//114514
