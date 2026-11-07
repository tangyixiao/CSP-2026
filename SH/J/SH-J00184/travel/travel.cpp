#include <bits/stdc++.h>
using namespace std ;
int a , b ;
string s , t ;
int main ( ) {
	freopen ( "travel.in" , "r" , stdin ) ;
	freopen ( "travel.out" , "w" , stdout ) ;
	cin >> a >> s ;
	cin >> b >> t ;
	if ( a != b ) { cout << "0000\n" ; return 0 ; }
	cout << "1" ;
	int x = ( s [ 0 ] - '0' ) * 10 + s [ 1 ] - '0' ; 
	int y = ( t [ 0 ] - '0' ) * 10 + t [ 1 ] - '0' ; 
	if ( x != y ) { cout << "000\n" ; return 0 ; }
	cout << "1" ;
	char c = s [ 2 ] , d = t [ 2 ] ;
	if ( c == 'A' ) {
		if ( d == 'B' ) cout << "11\n" ;
		if ( d == 'C' ) cout << "10\n" ;
		if ( d == 'D' ) cout << "00\n" ;
		if ( d == 'F' ) cout << "00\n" ;
	}
	if ( c == 'B' ) {
		if ( d == 'A' ) cout << "11\n" ;
		if ( d == 'C' ) cout << "11\n" ;
		if ( d == 'D' ) cout << "00\n" ;
		if ( d == 'F' ) cout << "00\n" ;
	}
	if ( c == 'C' ) {
		if ( d == 'A' ) cout << "10\n" ;
		if ( d == 'B' ) cout << "11\n" ;
		if ( d == 'D' ) cout << "00\n" ;
		if ( d == 'F' ) cout << "00\n" ;
	}
	if ( c == 'D' ) {
		if ( d == 'A' ) cout << "00\n" ;
		if ( d == 'B' ) cout << "00\n" ;
		if ( d == 'C' ) cout << "00\n" ;
		if ( d == 'F' ) cout << "11\n" ;
	}
	if ( c == 'F' ) {
		if ( d == 'A' ) cout << "00\n" ;
		if ( d == 'B' ) cout << "00\n" ;
		if ( d == 'C' ) cout << "00\n" ;
		if ( d == 'D' ) cout << "11\n" ;
	}
} 
//±©Á¦ 
