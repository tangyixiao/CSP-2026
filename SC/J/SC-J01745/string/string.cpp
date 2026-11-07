#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5 + 10 ;
int a[MAXN] ;
char c[MAXN] ;
void solve() {
	int n ; cin >> n ;
	for (int i = 1 ; i <= n ; i ++) {
		cin >> a[i] >> c[i] ;
	}
	int l = 1, r = n ;
	long long cnt = 0 ;
	while(l < r) {
		if (a[l] > a[r]) {
			a[l] -= a[r] ;
			if (c[l] != c[r]) {
				cnt += a[r] ;
			}
			r -- ;	
		} else if (a[r] > a[l]) {
			a[r] -= a[l] ;
			if (c[l] != c[r]) {
				cnt += a[l] ;
			}
			l ++ ;
		} else if (a[l] == a[r]) {
			if (c[l] != c[r]) {
				cnt += a[l] ;
			}
			l ++ ; r ++ ;
		}
	}
	cout << cnt ;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in", "r", stdin) ;
	freopen("string.out", "w", stdout) ;
	int t = 1 ; 
	while(t --) {
		solve() ;
	}
	fclose(stdin) ;
	fclose(stdout) ;
	return 0;
} 