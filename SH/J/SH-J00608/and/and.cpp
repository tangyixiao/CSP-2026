#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
long long a[N], vis[N];
string s[N];
long long ans = 0;
void dfs(int n, int m, long long sum, int x){
	if (x >= m){
		ans = max(ans, sum);
		return ;
	}
	for (int i = 1; i <= n; i++){
		if (vis[i] == 1) continue;
		vis[i] = 1;
		dfs(n, m, sum & a[i], x + 1);
		vis[i] = 0;
	}
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
		//s[i].reverse(s[i].begin(), s[i].end());
	} 
	if (n <= 20) {
		dfs(n, m, pow(2, n + 1) - 1, 0);
		cout << ans;
		return 0;
	}
	if (m == 1){
		for (int i = 1; i <= n; i++){
			ans = max(ans, a[i]);
		}
		cout << ans;
		return 0;
	}
	if (m == n){
		long long k = pow(2, n + 1) - 1;
		for (int i = 1; i <= n; i++){
			k = k & a[i];
		}
		ans = k;
		cout << ans;
		return 0;
	}
	if (n <= 2000){
		long long k = pow(2, n + 1) - 1;
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= n; j++){
				ans = max(ans, a[i] & a[j]);
			}
		} 
		cout << ans;
		return 0;
	}
	if (m == n - 1){
		
		for (int i = 1; i <= n; i++){
			int f = i;
			long long k = pow(2, n + 1) - 1;
			for (int j = 1; j <= n; j++){
				if (j != f) k = k & a[j];
			}
			ans = max(ans, k);
		}
		cout << ans;
		return 0;
	}
	for (int i = 1; i <= n; i++){
		ans = max(ans, a[i]);
	}
	cout << ans;
	return 0;
}
