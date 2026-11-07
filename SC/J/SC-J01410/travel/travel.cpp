#include <bits/stdc++.h>
using namespace std;
#define int long long
string a,b,c,d;
char x,y;
int p1,p2;
signed main()
{
	freopen ( "travel.in","r",stdin );
	freopen ( "travel.out","w",stdout );
	cin >> a >> b >> c >> d;
	if ( a != c )
	{
		cout << "0000";
		return 0;
	}
	p1 = ( b [ 0 ] - '0' ) * 10 + ( b [ 1 ] - '0' );
	p2 = ( d [ 0 ] - '0' ) * 10 + ( d [ 1 ] - '0' );
	x = b [ 2 ],y = d [ 2 ];
	if ( p1 != p2 )
	{
		cout << "1000";
		return 0;
	}
	if ( x > y )
		swap ( x,y );
	if ( x <= 'C' && y >= 'D' )
	{
		cout << "1100";
		return 0;
	}
	if ( x == 'D' && y == 'F' )
	{
		cout << "1111";
		return 0;
	}
	if ( x == 'A' && y == 'C' )
	{
		cout << "1110";
		return 0;
	}
	cout << "1111";
	return 0;
}