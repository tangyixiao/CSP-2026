#include <bits/stdc++.h>
using namespace std;
const int MAXS = 5e5+5;
const int MAXN = 3e5+5;
int n, m, a[MAXS], cnt[MAXN];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++){
		bool vis[MAXN] = {};
		stack<int> now;
		for (int j = i; j <= n; j++){
			if (vis[a[j]]){
				while (now.top() != a[j]){
					vis[now.top()] = false;
					now.pop();
				}
			}
			else{
				now.push(a[j]);
				vis[a[j]] = true;
			}
		}
		while (!now.empty()){
			cnt[now.top()]++;
			now.pop();
		}
		// for (int i = 1; i <= m; i++)
		// 	if (vis[i]) cnt[i]++;
	}
	for (int i = 1; i <= m; i++)
		cout << cnt[i] << " ";
	return 0;
}
