#include <bits/stdc++.h>
#define int long long
using namespace std;

const int maxn = 5e5 + 5, maxm = 3e5 + 5;
int a[maxn], ans[maxm], q[maxn], p, n, m;

signed main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++){
		p = 0;
		memset(q, 0, sizeof(q));
		for (int j = i; j <= n; j++){
			for (int k = p; k >= 1; k--){
				if (q[k] == a[j]){
					p = k - 1;
					break;
				}
			}
			q[++p] = a[j];
		}
		for (int j = 1; j <= p; j++){
			ans[q[j]]++;
		}
	}
	for (int i = 1; i <= m; i++){
		cout << ans[i] << " ";
	}
	return 0;
}
