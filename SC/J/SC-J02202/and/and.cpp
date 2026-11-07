#include <bits/stdc++.h>
using i32 = int;
using i64 = long long;
using namespace std;
#define READ_FILE 1
const i32 N = 2e5+5;
i32 n,m;
i32 a[N];

i32 dfs_max = 0;
bool dfs_vis[N];
void dfs(i32 cur, i32 depth) {
	if(depth == m) {
		dfs_max = max(dfs_max, cur);
		return;
	}
	
	for(i32 i=1;i<=n;i++) {
		if(!dfs_vis[i]) {
			dfs_vis[i] = 1;
			dfs(cur & a[i], depth + 1);
			dfs_vis[i] = 0;
		}
	}
}

i32 main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
#if READ_FILE
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
#endif
	// sj -> 75 pts
	cin >> n >> m;
	i32 sj6_cnt = 0;
	i32 sj7_max = 0;
	for(i32 i=1;i<=n;i++) {
		cin >> a[i];
		sj6_cnt += __builtin_popcount(a[i] + 1) == 1;
		sj7_max = max(sj7_max, a[i]);
	}
	
	// sj1 n <= 20 可用dfs
	if(n <= 20) {
		dfs(INT_MAX, 0);
		cout << dfs_max;
	}
	// sj2 m == 1 取最大的数
	else if(m == 1) {
		i32 sj2_max = 0;
		for(i32 i=1;i<=n;i++) {
			sj2_max = max(sj2_max, a[i]);
		}
		cout << sj2_max;
	}
	// sj3 m == n 全选
	else if(m == n) {
		i32 sj3_ans = INT_MAX;
		for(i32 i=1;i<=n;i++) {
			sj3_ans &= a[i];
		}
		cout << sj3_ans;
	}
	// sj4 m == 2 O(n^2)
	else if(m == 2) {
		i32 sj4_ans = 0;
		for(i32 i=1;i<=n;i++) {
			for(i32 j=i+1;j<=n;j++) {
				sj4_ans = max(sj4_ans, a[i] & a[j]);
			}
		}
		cout << sj4_ans;
	}
	// sj5 m == n-1 即枚举不选的那一个
	else if(m == n-1) {
		i32 sj5_bit[32];
		memset(sj5_bit, 0, sizeof sj5_bit);
		for(i32 i=1;i<=n;i++) {
			for(i32 j=0;j<=21;j++) {
				// 因为满足该条件的数据范围在2^20，所以枚举的位为21
				sj5_bit[j] = a[i] & (1 << j);
			}
		}
		i32 sj5_ans = 0;
		for(i32 i=1;i<=n;i++) {
			for(i32 j=0;j<=21;j++) {
				// 去除 bit
				sj5_bit[j] -= a[i] & (1 << j);
			}
			i32 sj5_tmp = 0;
			for(i32 j=0;j<=21;j++) {
				if(sj5_bit[j] == n-1) {
					// 剩余的 n-1 个数在这一位上都是1
					sj5_tmp += 1 << j;
				}
			}
			sj5_ans = max(sj5_ans, sj5_tmp);
			for(i32 j=0;j<=21;j++) {
				// 恢复 bit
				sj5_bit[j] += a[i] & (1 << j);
			}
		}
		cout << sj5_ans;
	}
	// sj6 所有数都满足 a[i] = (1 << k[i]) - 1;
	// 此时答案为不去重第m大的数
	else if(sj6_cnt == n) {
		sort(a+1, a+n+1, [](i32 &a, i32 &b) { return a > b; });
		cout << a[m];
	}
	// sj7 max(a[i]) <= 4 则计数数的个数并处理
	else if(sj7_max <= 4) {
		i32 sj7_cnt[5] = {0, 0, 0, 0, 0};
		for(i32 i=1;i<=n;i++) {
			++ sj7_cnt[a[i]];
		}
		if(m <= sj7_cnt[3] + sj7_cnt[1]) cout << 3; // 3 & 3 & ... & 3 & 1 & ... & 1
		else if (m <= sj7_cnt[3] + sj7_cnt[1] + sj7_cnt[2]) cout << 2; // 3 & 2 = 2
		else cout << 0; // 2 & 4 = 0 || 3 & 4 = 0
	}
	return 0;
}