#include <bits/stdc++.h>
using namespace std ;
const long long  N = 2e5 + 50 ;
long long  n ;
char c[N] ;
long long  a[N] ;
string s = "" , x ;
long long  sum = 0 ;
signed main(){
	freopen("string.in","r",stdin) ;
	freopen("string.out","w",stdout) ;
	ios::sync_with_stdio(0) ;
	cin.tie(0) ;cout.tie(0) ;
	cin >> n ;
	for(long long  i = 1 ;i <= n;++ i){
		cin >> a[i] >> c[i] ;
		for(long long  j = 1 ;j <= a[i] ;++ j){
			s += c[i] ;
		}
	}
	long long  lens = s.size() ;
	long long  ls = lens/2 ;
	for(long long  i = 0 ;i < ls ;++ i){
		if(s[i] != s[lens - i]){
			s[lens - i] = s[i] ;
			++ sum ; 
		}
	}
	cout << sum ;
	return 0 ;
}
