#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, m;
int a[500005];
struct Edge{
	bool t;
	int weizhi;
} edge[300005];
int num[500005];
int cnt[500005];
signed main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	int r = 0;
	for (int j = 1; j <= n; j++){
		for (int i = j; i <= n; i++){
			if (edge[a[i]].t == 1 && edge[a[i]].weizhi <= r){
				r = edge[a[i]].weizhi;
			}else{
				num[++r] = a[i];
				edge[a[i]].t = 1;
				edge[a[i]].weizhi = r;
			}
		}

		for (int i = 1; i <= r; i++){
			cnt[num[i]]++;
		}
		for (int i = 1; i <= n; i++){
			edge[i].t = 0;
			edge[i].weizhi = 0;
			num[i] = 0;
		}
		r = 0;
	}
	for (int i = 1; i <= m; i++) cout << cnt[i] << " ";
	return 0;
}