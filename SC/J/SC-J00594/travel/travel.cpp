#include<bits/stdc++.h>
using namespace std;
#define int long long 
string r_1 , r_2 , x_1 , x_2 , a , b;
char c , d;
signed main()
{
	freopen("travel.in" , "r" , stdin);
	freopen("travel.out" , "w" , stdout);
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> r_1 >> r_2 >> x_1 >> x_2;
	if(r_1 != x_1)
	{
		cout << "0000";
		return 0;
	}
	a = r_2[0] + r_2[1] , b = x_2[0] + x_2[1];
	if(a != b)
	{
		cout << "1000";
		return 0;
	}
	c = r_2[2] , d = x_2[2];
	if(c == 'A' || c == 'B' || c == 'C')
	{
		if(d == 'D' || d == 'F')
		{
			cout << "1100";
		}
		else
		{
			if((c == 'A' && d == 'B') || (c == 'B' && d == 'C'))
			{
				cout << "1111";
			}
			else
			{
				cout << "1110";
			}
		}
	}
	else
	{
		if(d == 'A' || d == 'B' || d == 'C')
		{
			cout << "1100";
		}
		else
		{
			cout << "1111";
		}
	}
	return 0;
}