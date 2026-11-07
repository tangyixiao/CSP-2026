#include<bits/stdc++.h>
#define int long long
using namespace std;
string c1,s1,r1,c2,s2,r2;
int i1,i2;
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	for(int i = 0;i <= 1;i ++)
	{
		r1 += s1[i];
		r2 += s2[i];
	}
	i1 = s1[2] - 'A' + 1,i2 = s2[2] - 'A' + 1;
	if(c1 == c2)
	{
		cout << 1;
		if(r1 == r2)
		{
			cout << 1;
			if((i1 <= 3 && i2 <= 3) || (i1 >= 4 && i2 >= 4))
			{
				cout << 1;
				if(i1 == i2 + 1 || i1 == i2 - 1 || (i1 == 4 && i2 == 6) || (i1 == 6 && i2 == 4))
				{
					cout << 1 << '\n';
				}
				else
				{
					cout << 0 << '\n';
				}
			}
			else
			{
				cout << "00" << '\n';
			}
		}
		else
		{
			cout << "000" << '\n';
		}
	}
	else
	{
		cout << "0000" << '\n';
	}
	return 0;
}
