#include <bits/stdc++.h>
using i32 = int;
using i64 = long long;
using namespace std;
#define READ_FILE 1
const i32 N = 5e5+5;
const i32 M = 3e5+5;
i32 n,m;
i32 a[N];
i32 nxt[N]; // 从右往左，第一个出现的位置，每一个位置的最终位置
i32 main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
#if READ_FILE
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
#endif
	cin >> n >> m;
	for(i32 i=1;i<=n;i++) {
		cin >> a[i];
	}
	memset(nxt, -1, sizeof nxt);
	
	for(i32 i=n;i>=1;i--) {
		// 初始化nxt数组 记录每个点位的下一个
		if(nxt[a[i]] == -1) nxt[a[i]] = i; // nxt[a[i]] -> 数字a[i]最后一个出现的位置在i
	}
	
	bool is[M];
	i32 ans[M];
	memset(ans, 0, sizeof ans);
	for(i32 i=1;i<=n;i++) {
		memset(is, 0, sizeof is);
		for(i32 j=i;j<=n;j++) {
			j = nxt[a[j]];
			
			if(!is[a[j]]){
				is[a[j]] = 1; // 数字a[j] 出现过并有效
				++ ans[a[j]];
			}
		}
	}
//	for(i32 i=1;i<=n;i++) cout << nxt[i] << ' ';
//	cout << '\n';
	for(i32 i=1;i<=m;i++) cout << ans[i] << ' ';
	return 0;
}