#include <bits/stdc++.h>
using namespace std ;

const int N = 2e5 + 10 ;
int n , m , a[N] ;
int b[N][35] ;
int ans = 0 ;

void dfs (int step , int cnt , int res)
{
	if (cnt == m)
	{
		ans = max (ans , res) ;
		return ;
	}
	if (step == n + 1)
	{
		return ;
	}
	dfs (step + 1 , cnt , res) ;
	dfs (step + 1 , cnt + 1 , res & a[step]) ;
}

int main ()
{
	freopen ("and.in" , "r" , stdin) ;
	freopen ("and.out" , "w" , stdout) ;
	cin >> n >> m ;
	bool flag = true ;
	for (int i = 1 ; i <= n ; i++ )
	{
		cin >> a[i] ;
		if (a[i] > 4) flag = false ;
	}
	if (n <= 20)
	{
		dfs (1 , 0 , INT_MAX) ;
		cout << ans << '\n' ;
		return 0 ;
	}
	if (n <= 2000)
	{
		if (m == 1)
		{
			for (int i = 1 ; i <= n ; i++ ) ans = max (ans , a[i] ) ;
			cout << ans << '\n' ;
		}
		else if (m == 2)
		{
			for (int i = 1 ; i <= n ; i++ )
				for (int j = 1 ; j < i ; j++ )
					ans = max (ans , a[i] & a[j]) ;
			cout << ans << '\n' ;
		}
		else
		{
			ans = INT_MAX ;
			for (int i = 1 ; i <= n ; i++ ) ans = ans & a[i] ;
		}
	}
	else
	{
		if (flag)
		{
			int x , y , z , w ;
			x = y = z = w = 0 ;
			for (int i = 1 ; i <= n ; i++ )
			{
				if (a[i] == 0) w++ ;
				if (a[i] == 1) z++ ;
				if (a[i] == 2) y++ ;
				if (a[i] == 3) x++ ;
			}
			if (m > x + z && m > x + y) cout << 0 << '\n' ;
			else if (m <= x) cout << 3 << '\n' ;
			else if (m <= x + y) cout << 2 << '\n' ;
			else cout << 1 << '\n' ;
			return 0 ;
		}
		if (m == n - 1)
		{
			for (int i = 1 ; i <= n ; i++ )
			{
				for (int k = 1 ; k <= 31 ; k++ )
				{
					if (a[i] & (1 << k))
					{
						if (b[i][k] == 0) b[i][k] = i ;
						else b[i][k] = -1 ;
					}
				}
			}
			int ans = 0 ;
			for (int i = 1 ; i <= n ; i++ )
			{
				int sum = 0;
				for (int k = 1 ; k <= 31 ; k++ )
					if (b[i][k] != i && b[i][k] != 0) sum += (1 << k) ;
				ans = max (ans , sum) ;
			}
			cout << ans << '\n' ;
		}
		else
		{
			sort (a + 1 , a + n + 1 ) ;
			cout << a[n - m + 1] << '\n' ;
		}
	}
	return 0 ;
}
