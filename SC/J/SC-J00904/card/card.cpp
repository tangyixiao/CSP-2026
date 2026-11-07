#include <bits/stdc++.h>
using namespace std;
int t[300005], a[500005], vis[300005];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
		t[a[i]]++;
	}
	for (int i = n; i >= 1; i--){
		memset(vis, 0, sizeof(vis));
		int x = i, k = x;
		bool flag = true;
		for (int j = 1; j < x; j++) vis[a[j]]++;
		for (int j = x + 1; j <= n; j++)
			if (vis[a[j]] > 0 || a[j] == a[x]){
				flag = false;
				break;
			}
		if (flag) t[a[i]] = max(t[a[i]], i);
	}
	t[a[n]] = n;
	for (int i = 1; i <= m; i++) cout << t[i] << " ";
	return 0;
}