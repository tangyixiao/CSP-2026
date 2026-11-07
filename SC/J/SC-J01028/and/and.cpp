#include <bits/stdc++.h>
using namespace std;
int n, m;
long long ans = -9e18;
bool vis[200005];
int a[200005];
void dfs(int step, int cnt){
	if (step > n+1) return;
	if (cnt == m){
		long long num;
		bool flag = 0;
		for (int i = 1;i <= n;i++){
			if (vis[i] == true){
				if (flag == false){
					num = a[i];
					flag = true;
				}
				else num = (num&a[i]);
			}
		}
		ans = max(ans, num);
		return;
	}
	vis[step] = 1;
	dfs(step+1, cnt+1);
	vis[step] = 0;
	dfs(step+1, cnt);
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++) cin >> a[i];
	dfs(1, 0);
	cout << ans;
	return 0;
}