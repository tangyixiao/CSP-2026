#include <iostream>
using namespace std;
int main ()
{
	freopen ( "travel.in", "r", stdin );
	freopen ( "travel.out", "w", stdout );
	int a, c;
	string b, d;
	cin >> a >> b >> c >> d;
	if ( a == c )
	{
		cout << 1;
	}
	else
	{
		cout << "0000";
		return 0;
	}
	int flag1 = 0, flag2 = 0;
	if (( b[0] == d[0] ) && ( b[1] == d[1] ))
	{
		cout << 1;
		int flag = 0;
		if ( b[2] >= 'D' )
		{
			if ( d[2] >= 'D' )
			{
				flag = 1;
			}
		}
		else
		{
			if ( d[2] <= 'D' )
			{
				flag = 1;
			}
		}
		if ( flag )
		{
			cout << 1;
			if (( b[2] + 1 == d[2] ) || ( b[2] - 1 == d[2] ))
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
	if ( !flag1 )
	{
		cout << 0;
	}
	if ( !flag2 )
	{
		cout << 0;
	}
	return 0;
} 
