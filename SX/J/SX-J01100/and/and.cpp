#include <bits/stdc++.h>
using namespace std ;
int num[10005] ;

int main () {
	freopen ("and.in", "r", stdin) ;
	freopen ("and.out", "w", stdout) ;
	int n, m, max = 0 ;
	cin >> n >> m ;
	for ( int i = 1 ; i <= n ; i++ )
		cin >> num[i] ;
	int number = num[1] ;
	for ( int i = 1 ; i <= n ; i++ ) {
		for ( int j = 1 ; j <= n ; j++ ) {
			if ( i == j )
				continue ;
			number = num[j] & num[i] ;
			if ( number > max )
				max = number ;
		}
	}
	cout << max ;
	return 0 ;
}