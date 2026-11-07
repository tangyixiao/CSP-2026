#include <bits/stdc++.h>
using namespace std ;
int main () {
	ios::sync_with_stdio(0) , cin.tie(0) , cout.tie(0) ;
	freopen ("and.in" , "r" , stdin) ;
	freopen ("and.out" , "w" , stdout) ;
	int n , m , a[20005] , ma = -1 ;
	cin >> n >> m ;
	for (int i = 0 ; i < n ; i++) {
		cin >> a[i] ;
		ma = max(ma , a[i]) ;
	}
	cout << ma << endl ;
	return 0 ;
}