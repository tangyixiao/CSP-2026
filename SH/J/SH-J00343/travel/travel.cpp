#include <bits/stdc++.h>
using namespace std;
string ax, ay, bx, by;
int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> ax >> ay >> bx >> by;
	int ans = 4;
	if(ax == bx)
	{
		cout << 1;
		ans--;
		if((ay[0] == by[0]) && (ay[1] == by[1]))
		{
			cout << 1;
			ans--;
			if(((ay[2] == 'D') && (by[2] == 'F')) || ((ay[2] == 'F') && (by[2] == 'D')))
			{
				cout << 1 << 1;
				ans -= 2;
			}
			if(((ay[2] == 'A') || (ay[2] == 'B') || (ay[2] == 'C')) && ((by[2] == 'A') || (by[2] == 'B') || (by[2] == 'C')))
			{
				cout << 1;
				ans--;
				if(!(((ay[2] == 'A') && (by[2] == 'C')) || ((ay[2] == 'C') && (by[2] == 'A'))))
				{
					cout << 1;
					ans--;
				}
			}
		}
	}
	for(int i = 1;i <= ans;i++)
	{
		cout << 0;
	}
} 
