#include <bits/stdc++.h>
using namespace std ;
const int N = 1e8 ;
int n , a[N] , cd , ans ;
char z[N] ;
char s[N] ;
bool same = true ;
int main () {
	ios::sync_with_stdio(0) , cin.tie(0) , cout.tie(0) ;
	freopen ("string.in" , "r" , stdin) ;
	freopen ("string.out" , "w" , stdout) ;
	cin >> n ;
	for (int i = 0 ; i < n ; i++) {
		cin >> a[i] >> z[i] ;
		while (a[i]--) {
			s[cd] = z[i] ;
			cd++ ;
		}
	}
	for (int i = 0 ; i <= n ; i++) {
		if (z[i] != z[i - 1]) {
			same = false ;
		}
	}
	for (int i = 0 ; i < (cd + 1) / 2 ; i++) {
		if (s[i] != s[cd - i]) ans++ ;
	}
	if (same) ans = 0 ;
	cout << ans << endl ;
	return 0 ;
}