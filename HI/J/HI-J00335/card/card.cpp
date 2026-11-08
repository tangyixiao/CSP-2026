#include<bits/stdc++.h>
using namespace std ;
vector<int> a(5e5 + 5) ;
vector<int> ans(3e5 + 5) ;
int main() {
	freopen("card.in" , "r" , stdin) ;
	freopen("card.out" , "w" , stdout) ;
	int n , m ;
	cin >> n >> m ;
	for(int i = 1 ; i <= n ; i ++) {
		cin >> a[i] ;
	}
	for(int i = 1 ; i <= n ; i ++) {
		//Õ»Íü¼ÇÕ¦Ð´ÁË 
		deque<int> s ;
		vector<bool> f(3e5 + 5) ;
		for(int j = i ; j <= n ; j ++) {
			if(f[a[j]]) {
				while(s.back() != a[j]) {
					ans[s.back()] -- ;
					s.pop_back() ;
				}
			}else {
				f[a[j]] = 1 ;
				ans[a[j]] ++ ;
				s.push_back(a[j]) ;
			}
		}
	}
	for(int i = 1 ; i <= m ; i ++) {
		cout << ans[i] << " "  ;
	}
	return 0 ;
}
