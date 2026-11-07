#include <bits/stdc++.h>
using namespace std ;

const int N = 2e5 + 10 ;
int n ;
long long a[N];
char c[N] ;

int main ()
{
	freopen ("string.in" , "r" , stdin) ;
	freopen ("string.out" , "w" , stdout) ;
	cin >> n ;
	long long sum = 0 ;
	for (int i = 1 ; i <= n ; i++ )
	{
		cin >> a[i] >> c[i] ;
		sum += a[i] ;
	}
	if (n == 1)
	{
		cout << 0 << '\n' ;
		return 0 ;
	}
	if (n == 2)
	{
		if (c[1] == c[2]) cout << 0 << '\n' ;
		else cout << min (a[1] , a[2]) << '\n' ;
		return 0 ;
	}
	int l = 0 , r = n + 1 ;
	long long suml = 0 , sumr = 0 ;
	long long ans = 0 ;
	while (l < r - 1)
	{
		if (suml <= sumr)
		{
			suml += a[++l] ;
			if (l + 1 == r) ans += (max (suml , sumr) - (sum + 1) / 2) ;
			if (c[l] == c[r]) ans += (a[l] + min(sumr - suml , 0ll)) ;
		}
		else
		{
			sumr += a[--r] ;
			if (l + 1 == r) ans += (max (suml , sumr) - (sum + 1) / 2) ;
			if (c[l] == c[r]) ans += (a[r] + min(suml - sumr , 0ll)) ;
		}
	}
	cout << sum / 2 - ans << '\n' ;
	return 0 ;
}
