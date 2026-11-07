#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	if (b[2] == 'F')
	{
		b = b.substr(0, 2) + 'E';
	}
	if (d[2] == 'F')
	{
		d = d.substr(0, 2) + 'E';
	}
	if (a == c)
	{
		cout << "1";
		if (b.substr(0, 2) == d.substr(0, 2))
		{
			cout << "1";
			if ((b[2] <= 'C' && d[2] <= 'C') || (b[2] > 'C' && d[2] > 'C'))
			{
				cout << "1";
				if (abs(b[2] - d[2]) == 1)
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
