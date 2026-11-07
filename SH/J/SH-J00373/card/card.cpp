#include <bits/stdc++.h>
using namespace std;

int a[500005], cnt[300005];
bool e[500005], vis[300005];

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i){
		cin >> a[i];
	}
	memset(cnt, 0, sizeof(cnt));
	for (int i = 1; i <= n; ++i){
		memset(e, 0, sizeof(e));
		for (int j = i; j <= n; ++j){
			for (int k = i; k < j; ++k){
				if (a[k] == a[j] && e[k]){
					for (int w = k; w < j; ++w){
						e[w] = 0;
					}
					break;
				}
			}
			e[j] = 1;
		}
		memset(vis, 0, sizeof(vis));
		for (int j = i; j <= n; ++j){
			if (!vis[a[j]] && e[j]){
				vis[a[j]] = 1;
				cnt[a[j]]++;
			}
		}
	}
	for (int i = 1; i <= m; ++i) cout << cnt[i] << " ";
	return 0;
}
