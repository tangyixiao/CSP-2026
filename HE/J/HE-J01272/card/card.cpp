#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
const int N = 1e6 + 5 ;
ll a[N] ;
ll dp[N] ;
ll tot[N] ;
bool check(ll x){
	for ( int i = x ; i >= 1 ; i-- ){
		tot[dp[i]]++ ; 
	}
	for ( int i = x ; i >= 1 ; i++ ){
		if ( tot[dp[i]] >= 2 ) return true ;
	}
	return false ;
}
int main(){
	freopen("card.in","r",stdin) ;
	freopen("card.out","w",stdout)
	int n , m ;
	cin >> n >> m ;
	for ( int i = 1 ; i <= n ; i++ ){
		cin >> a[i] ;
	}
	while ( n-- ){
		for ( int i = 1 ; i <= n ; i++ ){
			if ( check(i) ){
				
			}
			dp[i] += a[i] ;
		}
	}
	return 0 ;
}
