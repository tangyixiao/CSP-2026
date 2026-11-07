//只要左右两个不相同 就必然要改一个
//主要是不好遍历 
#include<bits/stdc++.h>

#define N 200010 
typedef long long LL ;
using namespace std ;

char c[N] ;
LL len = 0 , ans = 0 , n , a[N];

int main() {
	freopen("string.in" , "r" , stdin) ;
	freopen("string.out" , "w" , stdout) ;
	ios::sync_with_stdio(0) ;
	cin.tie(0) , cout.tie(0) ;
	cin >> n ;
	for(int i = 1 ; i <= n ; ++i) {
		cin >> a[i] >> c[i] ;
		len += a[i] ;
	}
	LL llast = 0 , rlast = 0 ;
	for(LL i = 1 , j = n ; i < j ; ) {
		if(llast) rlast = a[j] ;
		else if(rlast) llast = a[i] ;
		else llast = a[i] , rlast = a[j] ;
		LL k = min(llast , rlast) ;
		if(c[i] != c[j]) ans += k ;
		llast -= k , rlast -= k ;	//注意llast直接减会变 
		if(llast == 0) i++ ;
		if(rlast == 0) j-- ;
	}
	cout << ans ;
	return 0 ;
} 