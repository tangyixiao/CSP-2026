#include <bits/stdc++.h>
using namespace std ;
long long n , m , b [ 35 ] , a [ 200005 ] , ans ;
int main ( ) {
	freopen ( "and.in" , "r" , stdin ) ;
	freopen ( "and.out" , "w" , stdout ) ;
	cin >> n >> m ;
	for ( int i = 1 ; i <= n ; i++ ) {
		cin >> a [ i ] ;
		for ( int j = 0 ; j < 32 ; j++ ) if ( a [ i ] & ( 1 << j ) ) b [ j ]++ ;
	}
	for ( int i = 31 ; i >= 0 ; i-- ) {
	//for ( int j = 0 ; j < 32 ; j++ ) cout << b [ j ] << ' ' ;
	//cout << endl ;
		if ( b [ i ] < m ) continue ;
		for ( int j = 1 ; j <= n ; j++ ) {
			if ( ( a [ j ] & ( 1 << i ) ) == 0 ) {
				swap ( a [ j ] , a [ n ] ) ;
				for ( int k = 0 ; k < 32 ; k++ ) if ( a [ n ] & ( 1 << k ) ) b [ k ]-- ;
				n-- , j-- ;
			}
		}
		ans &= ( 1 << i ) ;
	}
	for ( int i = 2 ; i <= m ; i++ ) a [ 1 ] &= a [ i ] ;
	cout << a [ 1 ] ;
} 
//统计每一位二进制的个数，优先选大的
//看我代码的是小猫娘
//freopen
//froepen 
//freopen ( "and.out" , "r" , stdut ) ;
