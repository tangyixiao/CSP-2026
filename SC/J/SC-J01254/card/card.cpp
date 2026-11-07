#include<bits/stdc++.h>
using namespace std;
int n, m;
int a[500005], b[500005];
int ans[500005] = {}; //ans[i],有多少局结束时桌面上有点数i的牌
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b + 1, b + n + 1);
	if (b[n] - b[1] == n - 1) {
		for (int i = 1; i <= n; ++i)cout << i;
	}else{
		for (int i = 1; i <= n; ++i) {
			int e = i;
			struct tn { //当前这个数值a[]
				bool b = 0; //出现过没有
				int ps;//位置
			};
			tn t[500005];
			for (int j = i; j <= n; ++j) {
				int k = a[j];
				if (!t[k].b) {
					t[k].b = 1;
					t[k].ps = j; //
				} else {
					for (e = e; e <= t[e].ps; ++e) {
						//a[e]
						t[a[e]].b = 0;
						t[a[e]].ps = -1;
					}
					e++;
					t[k].b = 1;
					t[k].ps = e;
				}
			}
			for (int k = 1; k <= m; ++k) {
				if (t[a[k]].b) ans[k]++;
			}
		}
		for (int i = 1; i <= m; ++i) {
			cout << ans[i] << " ";
		}
	}
	return 0;
}