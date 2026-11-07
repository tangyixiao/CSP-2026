#include <bits/stdc++.h>
#define int long long
using namespace std ;

const int N = 2e5 + 7 ;

int a[N] , ans = -1e9 , n , m , maxn = -1e9 ;

void dfs(int pos , int sum , int pick)
{
	if(pick == m)
	{
		ans = max(sum , ans) ;
		return ;
	}
	if(pick > m or pos > n) return ;
	if(pick == 0)
	{
		dfs(pos + 1 , a[pos] , pick + 1) ;
		dfs(pos + 1 , sum , pick) ;
	}
	else
	{
		dfs(pos + 1 , sum & a[pos] , pick + 1) ;
		dfs(pos + 1 , sum , pick) ;
	}
}

signed main()
{
	freopen("and.in" , "r" , stdin) ;
	freopen("and.out" , "w" , stdout) ;
	cin >> n >> m ;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> a[i] ;
		maxn = max(maxn , a[i]) ;
	}
	if(n <= 20)
	{
		dfs(1 , 0 , 0) ;
		cout << ans << endl ;
	}
	else if(n <= 2000) 
	{
		if(m == 1)
		{
			cout << maxn << endl ;
		}
		else if(m == n)
		{
			int mul = a[1] ;
			for(int i = 2 ; i <= n ; i++)
			{
				mul &= a[i] ;
			}
			cout << mul << endl ;
		}
		else
		{
			for(int i = 1 ; i <= n ; i++)
			{
				for(int j = i + 1 ; j <= n ; j++)
				{
					ans = max(ans , a[i] & a[j]) ;
				}
			}
			cout << ans << endl ;
		}
	}
	else
	{
		sort(a + 1 , a + n + 1) ;
		int ans = a[n] ;
		for(int i = n - 1 ; i >= n - m + 1 ; i--) ans &= a[i] ;
		cout << ans << endl ;
	}
}
