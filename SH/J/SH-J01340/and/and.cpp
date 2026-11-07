#include <iostream>
using namespace std;
int main ()
{
	freopen ( "and.in", "r", stdin );
	freopen ( "and.out", "w", stdout );
	int n, m, max = -10000000;
	cin >> n >> m;
	int a[n+1];
	for ( int i = 1; i <= n; i++ ) 
	{
		cin >> a[i];
	}
	if ( m == 2 )
	{
		for ( int i = 1; i <= n; i++ )
		{
			for ( int j = i + 1; j <= n; j++ )
			{
				int b = a[i] & a[j];
				if ( max < b )
				{
					max = b;
				}
			}
		}
	}
	else if ( m == 3 )
	{
		for ( int i = 1; i <= n; i++ )
		{
			for ( int j = i + 1; j <= n; j++ )
			{
				for ( int k = j + 1; k <= n; k++ )
				{
					int b = a[i] & a[j] & a[k];
					if ( max < b )
					{
						max = b;
					}
				}
			}
		}
	}
	cout << max;
	return 0;
 } 
