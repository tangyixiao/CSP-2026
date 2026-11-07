#include<bits/stdc++.h>
using namespace std ;
int s[300005] , bj[300005] , g[300005] , a[200005] ;
int main(){
	freopen ( "card.in" , "r" , stdin ) ;
	freopen ( "card.out" , "w" , stdout ) ;
	ios::sync_with_stdio ( 0 ) ;
	cin.tie ( 0 ) ;
	int n , m ;
	cin >> n >> m ;
	for ( int i = 1 ; i <= n ; i++ ){
		cin >> a[i] ;
	}
	for ( int i = 1 ; i <= n ; i++ ){
		int zx = 0x3f ;
		for ( int j = i ; j <= n ; j++ ){
			if ( s[a[j]] != 0 ){
				for ( int q = s[a[j]] ; q < j ; q++ ){
					bj[q] = j ;
				}
			}
			s[a[j]] = j ;
			bj[j] = 0 ;
			zx = min ( zx , a[j] ) ;
		}
		for ( int j = zx ; j <= m ; j++ ){
			if ( bj[j] == 0 ){
				g[j]++ ;
			}else{
				s[j] = 0 ;
				bj[j] = 0 ;
			}
		}
	}
	for ( int i = 1 ; i <= m ; i++ ){
		cout << g[i] << " " ;
	}
	return 0 ;
}
