#include <bits/stdc++.h>
using namespace std;
const int MAXN = 5e5 + 10 ;
int point[MAXN] ;
int num[MAXN] ;
int hash[300010] ;
int vis[300010] ;
set <int> st ;
int search(int l, int r, int k) {
	int ans = -1 ;
	while(l <= r) {
		int mid = (l + r) / 2 ;
		if(point[mid] < k) {
			l = mid + 1 ; 
		} else if (point[mid] > k) {
			r = mid - 1 ;
		} else {
			ans = mid ;
			l = mid + 1 ;
		}
	}
	if (ans == -1) {
		return -1 ;
	}
	return ans ;
}
void solve() {
	int n, m ; cin >> n >> m ;
	bool pan = true ;
	for (int i = 1 ; i <= n ; i ++) {
		cin >> point[i] ;
		if (i != 1 && point[i] < point[i - 1]) {
			pan = false ;
		}
	}
	if(pan) {
		for (int i = 1 ; i <= m ; i ++) {
			int k = search(1, n, i) ;
			if (k == -1) {
				cout << 0 << " " ;
			} else {
				cout << k << " " ;
			} 
		} 
	} else {
		for (int i = 1 ; i <= n ; i ++) {
			vector <int> v(n + 10) ;
			int cnt = 0 ;
			for (int j = i ; j <= n ; j ++) {
				for (int k = 1 ; k <= cnt ; k ++) {//找重复 
					if (v[k] == point[j]) {
						cnt = k - 1 ;
						break ;
					}
				}
				v[++cnt] = point[j] ;
			}
			for (int j = 1 ; j <= cnt ; j ++) {
				vis[v[j]] ++ ;
			}		
		}
		for (int i = 1 ; i <= m ; i ++) {
			cout << vis[i] << " " ;
		}
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in", "r", stdin) ;
	freopen("card.out", "w", stdout) ;
	int t = 1 ; 
	while(t --) {
		solve() ;
	}
	fclose(stdin) ;
	fclose(stdout) ;
	return 0;
} 