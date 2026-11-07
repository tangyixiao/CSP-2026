#include <bits/stdc++.h>
using namespace std ;

int const N = 2e5 + 5 ;

int n , m , maxn ;
int a[N] ;


void dfs( int k , int cntt , int u )
{
	if ( cntt == m )
	{
		maxn = max ( maxn , k ) ;
		return ;
	}
	for ( int i = u + 1 ; i <= n ; i++ )
	{
		dfs ( (k&a[i]) , cntt + 1 , i ) ;
	}
}

int main()
{
	freopen("and.in","r",stdin) ;
	freopen("and.out","w",stdout);
	
	cin >> n >> m ;
	
	for ( int i = 1 ; i <= n ; i++ )
	{
		cin >> a[i] ;
	}
	if ( n <= 2000 )
	{
		for ( int i = 1 ; i <= n ; i++ )
		{
			dfs ( a[i] , 1 , i ) ;
		}
		
		cout << maxn ;
		
		return 0 ;
	}
	else
	{
		for ( int i = 1 ; i <= n ; i++ )
		{
			maxn = max ( maxn , a[i] ) ;
		}
		cout << maxn ;
	}
}
