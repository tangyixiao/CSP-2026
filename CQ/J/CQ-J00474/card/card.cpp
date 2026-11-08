#include <bits/stdc++.h>

using namespace std;

namespace zcq_qwq {
	const int N = 5e5 + 5, inf = 0x3f3f3f3f;
	
	int a[N], ans[N];
	
	bool vis[N];
	
	int n, m; 
	
	void main() {
		cin >> n >> m;
		for (int i = 1; i <= n; i++) cin >> a[i];
		for (int i = 1; i <= n; i++) {
			stack<int> s;
			for (int j = 1; j <= m; j++) {
				vis[j] = false;
			}
			for (int j = i; j <= n; j++) {
				if (vis[a[j]]) {
					while (!s.empty() && s.top() != a[j]) {
						vis[s.top()] = false;
						s.pop();
					}
				} else {
					vis[a[j]] = true;
					s.push(a[j]);
				}
			}
			while (!s.empty()) {
				ans[s.top()]++;
				s.pop();
			}
		}
		for (int i = 1; i <= m; i++) {
			cout << ans[i] << " ";
		}
	}
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	zcq_qwq::main();
	return 0;
}

/*
刻画被覆盖的条件
如果在后方存在一个 j，并且 j 没有被覆盖， 

无法 AK了
留下遗憾 

什么烂题啊我去

 
*/
