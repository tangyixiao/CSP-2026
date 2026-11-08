//From: CSP-J
//Problem: T3 按位与（and） 
//Time: 2026/10/31
//文件名: and.in/.out/.cpp
//时间限制: 1000 ms
//空间限制: 1024 MiB 
//预期得分: 100 pts 
//AK CSP-J
#include <bits/stdc++.h>
using namespace std;

constexpr int N = 2e5 + 10;

int n, m;
int a[N], ans = 0;
bool vis[N];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i ++) cin >> a[i];
//	for (int i = 1; i <= n; i ++) {
//		for (int k = 30; k >= 0; k --) {//枚举第 k 位 
//			cout << ((a[i] >> k) & 1);
//		}
//		cout << "\n";
//	}
	for (int k = 30; k >= 0; k --) {//枚举第 k 位 
		ans *= 2;
//		cout << ans << "\n";
		int cnt = 0;//记录有几个 1
		for (int i = 1; i <= n; i ++) {
			if (vis[i]) continue;
			if ((a[i] >> k) & 1) cnt ++;
		}
		if (cnt >= m) {
			for (int i = 1; i <= n; i ++) {
				if (!((a[i] >> k) & 1)) vis[i] = true;//这个数不行，以后不能选 
			}
			ans += 1;//这一位的答案是 1 
		}
	}
	cout << ans;
	return 0;
}
/*
题目大意
从 n 个数中选择 m 个数，使得选的数按位与的结果最大
如果所有位的 1 的个数 < m: 答案为 0；
如果最先有一个个数 == m：答案为这几个的按位与结果 
*/
