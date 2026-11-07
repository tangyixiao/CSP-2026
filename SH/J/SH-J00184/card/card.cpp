#include <bits/stdc++.h>
using namespace std ;
int n , m , a [ 500005 ] , b [ 500005 ] , ans [ 300005 ] , f [ 300005 ] , s [ 500005 ] , fir [ 300005 ] ;
bool fl [ 500005 ] , flag = 1 ;
vector <int> mp [ 500005 ] ;
void dfs ( int u ) {
	s [ u ] = 1 ;
	for ( int i = 0 ; i < mp [ u ] . size ( ) ; i++ ) {
		int v = mp [ u ] [ i ] ;
		dfs ( v ) ;
		s [ u ] += s [ v ] ;
	}
}
int sum ( int u , int x ) {
	//if ( a [ u ] == x ) cout << s [ u ] << ' ' << u << ' ' << x << endl ;
	if ( a [ u ] == x ) return s [ u ] ;
	if ( fir [ x ] > u ) return 0 ;
	int res = 0 ;
	for ( int i = 0 ; i < mp [ u ] . size ( ) ; i++ ) {
		int v = mp [ u ] [ i ] ;
		res += sum ( v , x ) ;
	} 
	//cout << res << ' ' << u << ' ' << x << endl ;
	return res ;
}
int main ( ) {
	freopen ( "card.in" , "r" , stdin ) ;
	freopen ( "card.out" , "w" , stdout ) ;
	cin >> n >> m ;
	for ( int i = 1 ; i <= n ; i++ ) cin >> a [ i ] ;
	for ( int i = 2 ; i <= n ; i++ ) if ( a [ i - 1 ] > a [ i ] ) { flag = 0 ; break ; }
	if ( flag == 1 ) {
		for ( int i = n ; i >= 1 ; i-- ) {
			if ( a [ i ] != a [ i + 1 ] ) cout << i << ' ' ;
		}
		return 0 ;
	}
	for ( int i = 1 ; i <= n ; i++ ) if ( fir [ a [ i ] ] == 0 ) fir [ a [ i ] ] = i ;
	for ( int i = n ; i >= 1 ; i-- ) {
		b [ i ] = i + 1 ;
		fl [ i ] = 1 ;
		if ( f [ a [ i ] ] != 0 ) b [ i ] = f [ a [ i ] ] , fl [ i ] = 0 ;
		f [ a [ i ] ] = i ;  
		mp [ b [ i ] ] . push_back ( i ) ;
	}
	dfs ( n ) ;
	//for ( int i = 1 ; i <= n ; i++ ) cout << s [ i ] << ' ' ;
	for ( int i = 1 ; i <= m ; i++ ) {
		cout << sum ( n , i ) << ' ' ;
	}
}
//何意味，建了个树，但好像不对 
