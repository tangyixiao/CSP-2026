#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin >> a >> b >> c >> d;
	int aa = 0,bb = 0,cc = 0,dd = 0;
	aa += 10 * (int)(a[0]-48);
	aa += (int)(a[1]-48);
	bb += 10 * (int)(b[0]-48);
	bb += (int)(b[1]-48);
	cc += 10 * (int)(c[0]-48);
	cc += (int)(c[1]-48);
	dd += 10 * (int)(d[0]-48);
	dd += (int)(d[1]-48);
	if(aa != cc)
	{
		cout << "0000";
		return 0;
	}
	else
	{
		if(bb != dd)
		{
			cout << "1000";
			return 0;
		}
		else
		{
			if(b[2] == 'A' || b[2] == 'B' || b[2] == 'C')
			{
				if(d[2] != 'A' && d[2] != 'B' && d[2] != 'C')
				{
					cout << "1100";
					return 0;
				}
				else
				{
					if((b[2] == 'A' && d[2] == 'C') || (b[2] == 'C' && d[2] == 'A'))
					{
						cout << "1110";
						return 0;
					}
					else
					{
						cout << "1111";
						return 0;
					}
				}
			}
			else
			{
				if(d[2] != 'D' && d[2] != 'F')
				{
					cout << "1100";
					return 0;
				}
				else
				{
					cout << "1111";
					return 0;
				}
			}
		}
	}
	return 0;
} 
