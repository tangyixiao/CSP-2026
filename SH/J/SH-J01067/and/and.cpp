#include <bits/stdc++.h>
using namespace std;
int n, m, a[200005], w[200005], v[200005], dp[200005], ans, res;
bool vis[200005];
void dfs(int step, int cnt){
	if (cnt > m) return ;
	if (step > n) {
		//cout << cnt << endl;
		if (cnt == m){
			//cout << ad << endl;
			vector<int> tmp;
			for (int i = 1; i <= n; i ++){
				if (vis[i]) tmp.push_back(v[i]);
			}
			ans = tmp[0];
			for (int i = 1; i < tmp.size(); i ++){
				ans = ans & tmp[i];
			}
			if (ans > res) res = ans;
		}
		return ;
	}
	//cout << step << " " << cnt << " " << v[step] << " " << (ad & v[step]) << endl;
	for (int i = 1; i <= n; i ++){
		if (!vis[i]){
			vis[i] = true;
			dfs(step + 1, cnt + 1);
			vis[i] = false;
			dfs(step + 1, cnt);
		}
	}
	
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i ++){
		cin >> v[i];
		w[i] = 1;
	}
	/*for (int i = 1; i <= n; i ++){
		for (int j = i + 1; j <= n; j ++){
			if (v[i] )
		}
	}*/
	//cout << v[1] << endl;
	dfs(1, 1);
	cout << ans;
	return 0;
}
