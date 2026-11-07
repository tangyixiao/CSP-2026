#include <bits/stdc++.h>
using namespace std ;
const long long N = 5e5 + 50 ;
const long long M = 3e5 + 50 ;
long long n , m ;
long long a[N] , b[M] ;
signed main(){
	freopen("card.in","r",stdin) ;
	freopen("card.out","w",stdout) ;
	ios::sync_with_stdio(0) ;
	cin.tie(0);cout.tie(0);
	cin >> n >> m ;
	for(long long i = 1 ;i <= n ;++ i){
		cin >> a[i] ;
	}
	for(long long i = 1 ;i <= n ;++ i){
		if(a[i] != a[i - 1])b[a[i]] = b[a[i - 1]] + 1 ;
		else b[a[i]] ++ ;
	}
	for(long long i = 1 ;i <= m ;++ i){
		cout << b[i] << " " ;
	}
	return 0 ;
}
