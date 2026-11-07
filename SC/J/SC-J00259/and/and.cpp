#include<bits/stdc++.h>
#define int long long
using namespace std;

int n , m;
int an = -1e18;
int a[200005];
bool vis[200005];
vector <int> v;
void dfs(int num , int sum , int i , int ti) {
	if (ti >= 50000000) return;
	if (num == m) {
		an = max(an , sum);
//		for (int o = 0 ; o < v.size() ; o ++) {
//			cout << v[o] << ' ';
//		}
//		cout << '\n';
		return;
	}
	
	for (int j = i + 1 ; j <= n ; j ++) {
		if (vis[j] == 0) {
			vis[j] = 1;
			//		v.push_back(a[j]);
			dfs(num + 1 , sum & a[j] , j , ti + 1);
			vis[j] = 0;
			//		v.pop_back();
		}
	}
}	
signed main(){
	
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	
	cin >> n >> m;
	
	for (int i = 1 ; i <= n ; i ++) {
		cin >> a[i];
	}
	
//	if (n <= 20) {
	sort(a + 1 , a + n + 1);
	dfs(0 , -1 , 1 , 0);
	cout << an << '\n'; 
//	}
//	if (n >= 20) {
//		
//		int ans = 0;
//		if (m == 1) {
//			cout << a[n];
//			return 0;
//		}
//		if (m == 2) {
//			ans = a[n] & a[n - 1];
//			cout << ans;
//			return 0;
//		}
//		if (m == n) {
//			ans = a[n];
//			for (int i = n - 1 ; i >= 1 ; i --) {
//				ans &= a[i];
//			} 
//			cout << ans;
//			return 0; 
//		}
//		if (m == n - 1) {
//			ans = a[n];
//			for (int i = n - 1 ; i >= 2 ; i --) {
//				ans &= a[i];
//			} 
//			cout << ans;
//			return 0; 
//		}
//	}
	return 0;
} 