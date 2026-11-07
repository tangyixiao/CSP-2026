#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int b [ 200005 ];
int a [ 200005 ];
int c [ 200005 ];
int cnt;
int ans = ( 1 << 33 ) - 1;
signed main()
{
	freopen ( "and.in","r",stdin );
	freopen ( "and.out","w",stdout );
	cin >> n >> m;
	for ( int i = 1;i <= n;i++ )
		cin >> a [ i ],b [ i ] = 1;
	for ( int i = 31;i >= 0;i-- )
	{
		cnt = 0;
		for ( int j = 1;j <= n;j++ )
		{
			if ( b [ j ] == 0 )
				continue;
			if ( a [ j ] & ( 1 << i ) )
			{
				cnt++;
				c [ j ] = 1;
			}
			else
				c [ j ] = 0;
		}
		if ( cnt < m )
			continue;
		for ( int j = 1;j <= n;j++ )
		{
			if ( c [ j ] == 0 )
				b [ j ] = 0;
		}
	}
	int pos = 0;
	for ( int i = 1;i <= n;i++ )
	{
		if ( pos == m )
			break;
		if ( b [ i ] )
		{
			pos++;
			ans &= a [ i ];
		}
	}
	if ( pos < m )
	{
		cout << 0;
		return 0;
	}
	cout << ans;
	return 0;
}