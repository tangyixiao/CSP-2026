#include <bits/stdc++.h>

using namespace std;

namespace Code {
	constexpr int N = 2e5 + 5;
	constexpr int BIT = 40;
	
	int n, m;
	int a[N];

	int pos[N][BIT];
	vector < int > cur;

	void main() {
		cin >> n >> m;
		for (int i = 1; i <= n; ++ i) cin >> a[i];

		int len = 0;
		for (int i = 1; i <= n; ++ i) {
			int num = a[i], tot = 0;
			while (num) {
				++ tot;
				pos[i][tot] = num % 2;
				num /= 2;
			}
			len = max(len, tot);
		}

		for (int i = 1; i <= n; ++ i) cur.emplace_back(i);

		int ans = 0;
		for (int i = len; i >= 1; -- i) {
			int cnt = 0;
			for (auto j : cur)
				if (pos[j][i]) cnt ++;
			
			if (cnt >= m) {
				ans = ans + (1 << i - 1);
				
				vector < int > now;
				for (auto j : cur)
					if (pos[j][i]) now.emplace_back(j);
				cur = now;
			}
		}

		cout << ans << '\n';
	}
}

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Code::main();

	return 0;
}

/*
这道题看上去就是把一个数先转化成二进制。
从高位到低位进行枚举。
因为当前位为 1，那么比它小的所有位置全部都是 1 也不可能超过当前的值。
因此产生了一个贪心策略，也就是判断当前还有多少个后备数在当前位有 1。
如果有超过 m 个，就把有 1 的全部保留，然后把答案更新。
否则不管当前位，继续往后枚举。
*/