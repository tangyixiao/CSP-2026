#include <bits/stdc++.h>
using namespace std ;
string c1 , s1 , c2 , s2 , p1 , p2 ; 
char z1 , z2 ;
int ans[4] = {0 , 0 , 0 , 0} ;
int main () {
	ios::sync_with_stdio(0) , cin.tie(0) , cout.tie(0) ;
	freopen ("travel.in" , "r" , stdin) ;
	freopen ("travel.out" , "w" , stdout) ;
	cin >> c1 >> s1 >> c2 >> s2 ;
	p1 = s1[0] + s1[1] ;
	p2 = s2[0] + s2[1] ;
	z1 = s1[2] ;
	z2 = s2[2] ;
	if (c1 == c2) {
		ans[0] = 1 ;
		if (p1 == p2) {
			ans[1] = 1 ;
			if ((z1 >= 'A' && z1 <= 'C' && z2 >= 'A' && z2 <= 'C') || (z1 >= 'D' && z1 <= 'F' && z2 >= 'D' && z2 <= 'F')) {
				ans[2] = 1 ;
				if ((z1 == 'A' && z2 == 'B') || (z2 == 'A' && z1 == 'B') || (z1 == 'B' && z2 == 'C') || (z2 == 'B' && z1 == 'C') || z1 == 'D' || z1 == 'F') {
					ans[3] = 1 ;
				}
			}
		}
	}
	for (int i = 0 ; i <= 3 ; i++) {
		cout << ans[i] ;
	}
	return 0 ;
}