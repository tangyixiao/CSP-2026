#include <bits/stdc++.h>

using namespace std;

int n, m, a[200005], vis[200005], t[200005], g;

void dfs(int k){
	if (k > m){
		int sum = t[1];
		for (int i = 2; i <= m; i++){
			sum = t[i] & sum;
		}
		g = max(g, sum);
	}
	for (int i = 1; i <= n; i++){
		if (vis[i]) continue ; 
		vis[i] = 1;
		t[k] = a[i];
		dfs(k + 1);
		vis[i] = 0;
	}
}

bool IF(){
	for (int i = 1; i <= n; i++){
		if (a[i] != i - 1) return 0;
	}
	return 1;
}

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
	if (n <= 20){
		dfs(1);
		cout << g;
	}else{
		if (m == 1){
			int mx = 0;
			for (int i = 1; i <= n; i++){
				mx = max(mx, a[i]);
			}
			cout << mx;
			return 0;
		}else if (m == n){
			int sum = a[1];
			for (int i = 2; i <= n; i++){
				sum = sum & i;
			}
		}else if (m == 2){
			int mx = 0;
			for (int i = 1; i <= n; i++){
				for (int j = 1; j <= n; j++){
					if (i == j)
						continue ;
					mx = max(mx, a[i] & a[j]);
				}
			}
		}else if ((log2(n) == int(log2(n))) && IF()){
			int sum = a[n];
			for (int i = n - 1; i >= n - m + 1; i--){
				sum = sum & a[i]; 
			}
			cout << sum;
		}else{
			sort(a + 1, a + n + 1);
			int sum = a[n];
			for (int i = n - 1; i >= n - m + 1; i--){
				sum = sum & a[i]; 
			}
			cout << sum;
		}
	}
	return 0;
}
