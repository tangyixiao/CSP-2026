#include<bits/stdc++.h>
using namespace std ;
const int N = 2e5 + 5 ;
pair<int , char> v[N] ;
int main() {
	freopen("string.in" , "r" , stdin) ;
	freopen("string.out" , "w" , stdout) ;
	int n ;
	cin >> n ;
	int last = 0 ;
	for(int i = 1 ; i <= n ; i ++) {
		int a ;
		char c ;
		cin >> a >> c ;
		v[i].first = a ;
		v[i].second = c ;
		last ++ ;
	}
	long long ans = 0 ;
	int mi = 0 ;
	int last_ = last ;
	for(int i = 1 ; i < last_ ;) {
		if(v[i].second != v[last_].second) {
			if(v[i].first == v[last_].first) {
				ans += v[i].first ;
				last_ -- ;
				i ++ ;
				continue ;
			}
			mi = min(v[i].first , v[last_].first) ;
			ans += mi ;
			if(mi == v[i].first) {
				v[last_].first -= mi ;
				i ++ ;
			}else {
				v[i].first -= mi ;
				last_ -- ;
			}
		}else { 
			if(v[i].first == v[last_].first) {
				last_ -- ;
				i ++ ;
				continue ;
			}
			mi = min(v[i].first , v[last_].first) ;
			if(mi == v[i].first) {
				v[last_].first -= mi ;
				i ++ ;
			}else {
				v[i].first -= mi ;
				last_ -- ;
			}
		}
	}
	cout << ans ;
	return 0 ;
}

