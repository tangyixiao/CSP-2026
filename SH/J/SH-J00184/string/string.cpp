#include <bits/stdc++.h>
using namespace std ;
long long ans , n , a [ 200005 ] ;
char b [ 200005 ] ;
int main ( ) {
	freopen ( "string.in" , "r" , stdin ) ;
	freopen ( "string.out" , "w" , stdout ) ;
	cin >> n ;
	for ( int i = 1 ; i <= n ; i++ ) cin >> a [ i ] >> b [ i ] ;
	long long l = 1 , r = n ;
	while ( l < r ) {
		if ( b [ l ] != b [ r ] ) ans += min ( a [ l ] , a [ r ] ) ;
		if ( a [ l ] < a [ r ] ) {
			a [ r ] -= a [ l ] ;
			l++ ; 
		}
		else {
			a [ l ] -= a [ r ] ;
			r-- ; 
		}
		//cout << l << ' ' << r << ' ' << ans << endl ;
	}
	cout << ans ;
} 
//˫ָ�룿 
