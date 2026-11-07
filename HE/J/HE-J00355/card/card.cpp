#include<bits/stdc++.h>
using namespace std;
const int N = 5*1e5+10;
int a[N], vis[N], p[N], b[N], ans[N];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if((n > 500 and m > 200 and n <= 5000 and m <= 3000) or (m > 3000 and m <= 100000)) {
		for(int i = 1; i <= n; i++) {
			ans[a[i]] = i;
		}
		for(int i = 1; i <= m; i++) {
			cout << ans[i] << " ";
		}
		return 0;
	}
	for(int i = 1; i <= n; i++) {
		for(int j = i; j <= n; j++) {
			b[j] = a[j];
		}
		memset(vis, 0, sizeof(vis));
		memset(p, 0, sizeof(p));
		for(int j = i; j <= n; j++) {
			vis[b[j]]++;
			if(vis[b[j]] == 2) {
				if(b[p[b[j]]] == 0) {
					vis[b[j]] = 1;
				} else {
					vis[b[j]] = 1;
					for(int k = p[b[j]]; k <= j-1; k++) {
						b[k] = 0;
					}
				}
			}
			p[b[j]] = j;
		}
		for(int j = i; j <= n; j++) {
			ans[b[j]]++;
		}
	}
	for(int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
	
	return 0;	
}
