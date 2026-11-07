#include <iostream>
#include <math.h>
#include <string>

using namespace std;

bool check(string s1, string s2)
{
	if(s1[2] <= 'C' && s2[2] <= 'C')
	{
		return true;
	}
	else if(s1[2] > 'C' && s2[2] > 'C')
	{
		return true;
	}
	return false;
}

bool check2(string s1, string s2)
{
	if(abs(s1[2] - s2[2]) == 1 || (s1[2] == 'D' && s2[2] == 'F') || (s1[2] == 'F' && s2[2] == 'D'))
	{
		return true;
	}
	return false;
}

int main(void)
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2)
	{
		cout << 1;
		if(s1.substr(0, 2) == s2.substr(0, 2))
		{
			cout << 1;
			if(check(s1, s2))
			{
				cout << 1;
				if(check2(s1, s2))
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
} 