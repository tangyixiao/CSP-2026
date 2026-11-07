#include <bits/stdc++.h>
using namespace std;
int a [ 500005 ];
int b [ 500005 ];
int c [ 500005 ];
int l = 1,r = 1;
int ans [ 500005 ];
int n,m;
int pos;
signed main()
{
	freopen ( "card.in","r",stdin );
	freopen ( "card.out","w",stdout );
	cin >> n >> m;
	for ( int i = 1;i <= n;i++ )
		cin >> a[ i ];
	for ( int i = 1;i <= n;i++ )
	{
		memset ( c,0,sizeof c );
		memset ( b,0,sizeof b );
		pos = 0;
		for ( int j = i;j <= n;j++ )
		{
			while ( b [ a [ j ] ] )
				b [ a [ pos ] ] = 0,pos--;
			c [ ++pos ] = j;
			b [ a [ j ] ] = 1;
		}
	}
	for ( int i = 1;i <= m;i++ )
		cout << ans [ i ] << ' ';
	return 0;
}