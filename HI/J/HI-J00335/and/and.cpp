#include<bits/stdc++.h>
using namespace std ;
int n , m ;
long long mx = 0 ;
const int N = 2e5 + 5 ;
vector<int> a(25) ;
vector<int> b(N) ;
void dfs(int now , long long sum , int cnt) {
	if(now > n) {
		return ;
	}
	if(cnt == m) {
		mx = max(mx , sum) ;
		return ;
	}
	dfs(now + 1 , sum & a[now + 1] , cnt + 1) ;
	dfs(now + 1 , sum , cnt) ;
}
void solve1() {
	for(int i = 1 ; i <= n ; i ++ ) {
		cin >> a[i] ;
	}
	long long d = 1ll * pow(2 , 31) - 1 ;
	dfs(1 , d , 0) ;
	dfs(1 , a[1] , 1) ;
	cout << mx ;
}
int main() {
	freopen("and.in" , "r" , stdin) ;
	freopen("and.out" , "w" , stdout) ;
	cin >> n >> m ;
	if(n <= 20) {
		solve1() ;
	}
	return 0 ;
}

