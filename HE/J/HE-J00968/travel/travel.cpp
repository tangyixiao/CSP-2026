#include <iostream> 
using namespace std;
string c1, s1, c2, s2;
int l1, r1, l2, r2;
int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 != c2)
	{
		cout << "0000\n";
		return 0;
	}
	cout << "1";
	if(s1[0] != s2[0] || s1[1] != s2[1])
	{
		cout << "000\n";
		return 0;
	}
	cout << "1";
	if(s1[2] <= 'C')
	{
		l1 = 1;
		r1 = 0; 
	}
	else
	{
		l1 = 0;
		r1 = 1;
	}
	if(s2[2] <= 'C')
	{
		l2 = 1;
		r2 = 0; 
	}
	else
	{
		l2 = 0;
		r2 = 1;
	}
	if(l1 != l2)
	{
		cout << "00\n";
		return 0;
	}
	cout << "1";
	char c;
	if(s1[2] == 'A')
	{
		if(s2[2] == 'B')
		{
			c = '1';
		}
		else
		{
			c = '0';
		}
	}
	else if(s1[2] == 'B')
	{
		c = '1';
	}
	else if(s1[2] == 'C')
	{
		if(s2[2] == 'B')
		{
			c = '1';
		}
		else
		{
			c = '0';
		}
	}
	else
	{
		c = '1';
	}
	cout << c << "\n";
	return 0;
}
