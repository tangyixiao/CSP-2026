#include<bits/stdc++.h>
using namespace std ;
int main(){
	freopen ( "string.in" , "r" , stdin ) ;
	freopen ( "string.out" , "w" , stdout ) ;
	ios::sync_with_stdio ( 0 ) ;
	cin.tie ( 0 ) ;
	int n £»
	long long w = 0 ;
	cin >> n ;
	string c = "" ;
	while ( n-- ){
		int a ;
		char s ;
		cin >> a >> s ;
		w += a ; 
		for ( int i = 1 ; i <= a ; i++ ){
			c += s ;
		}
	}
	int ans = 0 ;
	for ( int i = 0 , j = w - 1 ; i <= j ; i++ , j-- ){
		if ( c[i] != c[j] ){
			ans++ ;
		}
	}
	cout << ans ;
	return 0 ;
}
