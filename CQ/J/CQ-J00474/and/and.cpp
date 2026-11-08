#include <bits/stdc++.h>

#define int long long

using namespace std;

namespace zcq_qwq {
	const int N = 2e5 + 5;
	
	int n, m, ans;
	
	int a[N];
	
	bool vis[N], vis2[N];
	
	void main() {
		cin >> n >> m;
		for (int i = 1; i <= n; i++) cin >> a[i];
		for (int i = 1; i <= n; i++) vis[i] = true;
		for (int i = 30; i >= 0; i--) {
			for (int j = 1; j <= n; j++) vis2[j] = vis[j];
			for (int j = 1; j <= n; j++) {
				vis2[j] &= (a[j] >> i & 1);
			}
			int cnt = 0;
			for (int j = 1; j <= n; j++) cnt += (vis2[j] != 0);
			if (cnt >= m) {
				ans += (1ll << i);
				for (int j = 1; j <= n; j++) vis[j] = vis2[j];
			} 
		} 
		cout << ans;
	}
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	zcq_qwq::main();
	return 0;
}

/*
按位与的最大值？
与好像没有什么性质
直接拆贡献，每一位是 1，相当于选出来的 m 个数里面每一个的这一位都是 1.
然后高位的一个贡献，比所有低位的贡献都要大，所以，我们贪心地从高往低选就行了
现在就是处理选点，如果你发现加进来一位，合法的没有 m 个了，就不选。
然后做完了 
*/
