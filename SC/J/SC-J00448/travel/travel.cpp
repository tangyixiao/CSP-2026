#include<iostream>
using namespace std;
int main()
{
	freopen("travel.in" , "r" , stdin);
	freopen("travel.out" , "w" , stdout);
	bool y = false;
	string c1 , s1 , c2 , s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2)
	{
		y = true;
		cout << '1';
	}
	else cout << "0000";
	if(y)
	{
		if(s1[0] == s2[0] && s1[1] == s2[1])
		{
			 cout << '1';
		}
		else 
		{
			y = false;
			cout << "000";
		}
	}
	if(y)
	{
		if(s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C')
		{
			if(s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C')
			{
				cout << '1';
			}
			else
			{
				cout << "00";
				y = false;
			}
		}
		else
		{
			if(s2[2] == 'D' || s2[2] == 'F')
			{
				cout << '1';
			}
			else
			{
				cout << "00";
				y = false;
			}
		}
	}
	if(y)
	{
		if(s2[2] == s1[2] - 1  || s1[2] == s2[2] - 1)
		{
			cout << '1';
		}
		else cout << '0';
	}
	return 0;
}