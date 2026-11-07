#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5 + 10 ;
long long num[MAXN] ;
int maxx = -1 ;
int n, m ;
map <long long, int> mp ;
void solve() {
	cin >> n >> m ;
	long long k = 0 ;
	
	sort(num + 1, num + 1 + n) ;
	long long sum = (1ll << 32) - 1 ;
	for (int i = n ; i >= n - m + 1 ; i --) {
		sum &= num[i] ;
	}
	cout << sum ;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in", "r", stdin) ;
	freopen("and.out", "w", stdout) ;
	int t = 1 ; 
	while(t --) {
		solve() ;
	}
	fclose(stdin) ;
	fclose(stdout) ;
	return 0;
} 