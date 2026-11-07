#include <bits/stdc++.h>
using namespace std ;

int const N = 5e5 + 5 , M = 3e5 + 5 ;

int n , m , maxn ;
int a[N] , b[M] ;

set<int>st ;
stack<int>stk;

map<int,int>mp;

int main()
{
	freopen("card.in","r",stdin) ;
	freopen("card.out","w",stdout);
	
	cin >> n >> m ;
	
	for ( int i = 1 ; i <= n ; i++ )
	{
		cin >> a[i] ;
		mp[a[i]] ++ ;
	}
	if ( n <= 500 )
	{
		for ( int i = 1 ; i <= n ; i++ )
		{
			if ( !stk.empty() )stk.pop();
			st.clear() ;
			for ( int j = i ; j <= n ; j++ )
			{
				if ( st.count(a[j]) )
				{
					while ( stk.top() != a[j] )
					{
						
						st.erase(stk.top());
						stk.pop();
					}
				}
				else
				{
					stk.push(a[j]) ;
					st.insert(a[j]);
				}
			}
			for ( int j = i ; j <= n ; j++ )
			{
				if (st.count(a[j]))b[a[j]] ++ ;
				st.erase(a[j]);
			}
		}
		for ( int i = 1 ; i <= m ; i++ )
		{
			cout << b[i] << ' ';
		}
	}
	else
	{
		for ( int i = 1 ; i <= m ; i++ )
		{
			cout << max(mp[a[i]],0)<< ' ';
			mp[a[i]]--;
		}
	}
}