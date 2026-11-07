#include <bits/stdc++.h>
#define int long long
using namespace std ; 

const int N = 2e5 + 7 ;

int a[N] , e[N] , s[N] ;
char c[N] ;

signed main()
{
	freopen("string.in" , "r" , stdin) ;
	freopen("string.out" , "w" , stdout) ;
	int n ;
	cin >> n ;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> a[i] ;
		cin >> c[i] ;
		e[i] = e[i - 1] + a[i] ;
		s[i] = s[i - 1] + 1 ;
	}
	int l = 1 , r = n , ans = 0 ; 
	while(l < r)
	{
		if(c[l] != c[r])
		{
			if(a[l] > a[r])
			{
				ans += a[r] ;
				a[l] -= a[r] ;
				r-- ;
			}
			else if(a[l] == a[r])
			{
				ans += a[r] ;
				r-- ;
				l++ ;
			}
			else
			{
				ans += a[l] ;
				a[r] -= a[l] ;
				l++ ;
			}
		}
		else
		{
			if(a[l] > a[r])
			{
				a[l] -= a[r] ;
				r-- ;
			}
			else if(a[l] == a[r])
			{
				r-- ;
				l++ ;
			}
			else
			{
				a[r] -= a[l] ;
				l++ ;
			}
		}
	}
	cout << ans ;
} 
