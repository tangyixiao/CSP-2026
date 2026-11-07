#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,c;
	string b,d;
	cin >> a >> b >> c >> d;
	int e = 0,f = 0;
	int lenb = b.size(),lend = d.size();
	for(int i = 0; i < lenb - 1; i++)
	{
		e = e * 10 + b[i] - '0';
	}
	for(int i = 0; i < lend - 1; i++)
	{
		f = f * 10 + d[i] - '0';
	}
	char g = b[lenb - 1],h = d[lend - 1];
	if(a == c)
	{
		cout << 1;
		if(e == f)
		{
			cout << 1;
			if((g >= 'A' && g <= 'C' && h >= 'A' && h <= 'C') || (g >= 'D' && g <= 'F' && h >= 'D' && h <= 'F'))
			{
				cout << 1;
				if(g - h == 1 || h - g == 1)
				{
					cout << 1;
				}
				else
				{
					cout << 0;
				}
			}
			else
			{
				cout <<"00";
			}
		}
		else
		{
			cout <<"000";
		}
	}
	else
	{
		cout << "0000";
	}
	return 0;
} 
