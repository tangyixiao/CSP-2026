#include <bits/stdc++.h>
using namespace std;
string a, b, c, d;
bool n, m, r;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> a >> b >> c >> d;
	if (a[0] == c[0] && a[1] == c[1]) 
	{
		r = true;
		cout << "1";
	}
	else
	{
		r = false;
		cout << "0";
	}
	if (r == true)
	{
		if (b[0] == d[0] && b[1] == d[1])
		{
			m = true;
			cout << "1";
		}
		else
		{
			m = false;
			cout << "0";
		}
	}
	else
	{
		m = false;
		cout << 0;
	}
	if (r == true)
	{
		if (m == true)
		{
			if (b[2] >= 'A' && b[2] <= 'C')
			{
				if (d[2] >= 'A' && d[2] <= 'C')
				{
					n = true;
					cout << "1";
				}
				else
				{
					n = false;
					cout << 0;
				}
			}	
			else if (b[2] >= 'D' && b[2] <= 'F')
			{
				if (d[2] >= 'D' && d[2] <= 'F')
				{
					n = true;
					cout << "1";
				}
				else
				{
					n = false;
					cout << 0;
				}
			}
			else
			{
				n = false;
				cout << 0;
			}
		}
		else
		{
			n = false;
			cout << 0;
		}
	}
	else
	{
		n = false;
		cout << "0";
	}
	if (r == true)
	{
		if (m == true)
		{
			if (n == true)
			{
				if ((b[2] == 'A' && d[2] == 'B') || (b[2] == 'B' && d[2] == 'A'))
				{
					cout << "1";
				}
				else if ((b[2] == 'B' && d[2] == 'C') || (b[2] == 'C' && d[2] == 'B'))
				{
					cout << 1;
				}
				else if ((b[2] == 'D' && d[2] == 'F') || (b[2] == 'F' && d[2] == 'D'))
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
				cout << 0;
			}
		}
		else
		{
			cout << 0;
		}
	}
	else
	{
		cout << "0";
	}
	return 0;	
} 
