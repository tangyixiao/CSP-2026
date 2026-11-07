#include <bits/stdc++.h>
using namespace std;

int a, c;
string b, d;

bool f1, f2, f3, f4;

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	b = " " + b;
	d = " " + d;
	int numa = 10 * (b[1] - '0') + (b[2] - '0');
	int numc = 10 * (d[1] - '0') + (d[2] - '0');
	char c1 = b[3], c2 = d[3];
	if (a == c) 
		f1 = true;
	if (f1 && numa == numc)
	{
		f2 = true;
		if (c1 == 'D' && c2 == 'F')
			f3 = true;
		else if (c1 == 'F' && c2 == 'D')
			f3 = true;
		else if (c1 == 'A')
		{
			if (c2 == 'B' || c2 == 'C')
			{
				f3 = true;
			}
		}
		else if (c1 == 'B')
		{
			if (c2 == 'A' || c2 == 'C')
			{
				f3 = true;
			}
		}
		else if (c1 == 'C')
		{
			if (c2 == 'A' || c2 == 'B')
			{
				f3 = true;
			}
		}
	}
	if (f3 && abs(c1 - c2) == 1) 
		f4 = true;
	cout << f1 << f2 << f3 << f4 << endl;
	return 0;
 } 
