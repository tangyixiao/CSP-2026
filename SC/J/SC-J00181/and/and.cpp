#include<bits/stdc++.h>

#define N 200010
using namespace std ;

int n , m , a[N] , cnt[40] , ans = 0 ;    //统计每一位1的个数 
short abit[N][40] ;
bool sta[N] ;

int main() {
	freopen("and.in" , "r" , stdin) ;
	freopen("and.out" , "w" , stdout) ;
	ios::sync_with_stdio(0) ;
	cin.tie(0) , cout.tie(0) ;
	cin >> n >> m ;
	for(int i = 1 ; i <= n ; ++i) cin >> a[i] , sta[i] = true ;
	for(int i = 1 ; i <= n ; ++i) {
		for(int j = 30 ; j >= 0 ; --j) {
			int k = (a[i]&(1<<j)) ;
			cnt[j] += (bool)k , abit[i][j] = (bool)k ;
		}
	}
	for(int j = 30 ; j >= 0 ; --j) {
		if(cnt[j] >= m) {    //有可能前面已经给减掉了 凑不齐cntj个 
			int res = 0 ;
			for(int i = 1 ; i <= n ; ++i) {
				if(sta[i] && abit[i][j]) res++ ;
			}
			if(res >= m) {    //凑不够就算了 因为如果为了这一位放弃之前的位 显然是不利的 
				ans += (1<<j) ;
				for(int i = 1 ; i <= n ; ++i) {
					if(sta[i] && !abit[i][j]) sta[i] = false ;
				}
			}
		}
	}
	cout << ans ;
	return 0 ;
}