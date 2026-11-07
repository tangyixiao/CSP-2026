#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
ll n , len , minn = 1e9 ;
string s ;
int main(){
	freopen("string.in","r",stdin) ;
	freopen("string.out","r",stdout) ;
	cin >> n ;
	for ( int i = 1 ; i <= n ; i++ ){
		ll x ;
		char c ;
		cin >> x >> c ;
		for ( int j = 1 ; j <= x ; j++ ){
			s[len] = c ;
			len++ ;
		}
		minn = min(minn,x) ;
	}
	if ( n == 1 ){
		cout << 0 ;
		return 0 ;
	}
	string s1 = "" ;
	ll j = 0 ;
	for ( int i = s.size() ; i >= 0 ; i-- ){
		s1[j] += s[i] ;
		j++ ;
	}
	if ( s1 == s ) cout << 0 ;
	else if ( n == 2 ){
		cout << minn ;
		return 0 ;
	}
	return 0 ;
}
