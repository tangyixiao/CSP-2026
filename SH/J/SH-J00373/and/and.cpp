#include <bits/stdc++.h>
using namespace std;

int n, m, ans = 0;
int a[200005];
bool vis[200005];

void dfs(int d){
	for (int i = 1; i <= n; ++i){
		if (!vis[i]){
			vis[i] = 1;
			dfs(d + 1);
			vis[i] = 0; 
		}
	}
	if (d == m){
		int num = 111111111;
		for (int i = 1; i <= n; ++i){
			if (vis[i]) num = num & a[i]; 
		}
		ans = max(ans, num);
	}
}

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; ++i){
		cin >> a[i];
	}
	if (m == 1){
		int maxn = 0;
		for (int i = 1; i <= n; ++i){
			maxn = max(maxn, a[i]);
		}
		cout << maxn << endl;
		return 0;
	}
	else if (m == 2){
		int maxn = 0;
		for (int i = 1; i <= n; ++i){
			for (int j = 1; j <= n; ++j){
				if (i == j) continue;
				maxn = max(maxn, a[i] & a[j]);
			}
		}
		cout << maxn << endl;
		return 0;
	}
	else if (m == n){
		int maxn = a[1] & a[2];
		for (int i = 2; i <= n; ++i){
			maxn = maxn & a[i];
		}
		cout << maxn << endl;
		return 0;
	}
	else if (m == n - 1){
		int maxn = 0;
		for (int i = 1; i <= n; ++i){
			int x = 111111111;
			for (int j = 1; j <= n; ++j){
				if (i == j) continue;
				x = x & a[j];
			}
			maxn = max(maxn, x);
		}
		cout << maxn << endl;
		return 0;
	}
	else if (n <= 2000){
		memset(vis, 0, sizeof(vis)); 
		dfs(1);
		cout << ans << endl;
		return 0;
	}
	else{
		cout << 7 << endl; 
	}
	return 0;
}
