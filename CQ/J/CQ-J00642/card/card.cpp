//From: CSP-J
//Problem: T4 纸牌游戏（card） 
//Time: 2026/10/31
//文件名: card.in/.out/.cpp
//时间限制: 1000 ms
//空间限制: 1024 MiB 
//预期得分: 40 pts 
//AK CSP-J
#include <bits/stdc++.h>
using namespace std;

constexpr int N = 5e5 + 10;

int n, m;
int a[N];//手上牌的原有顺序 
int ans[N];//答案数组 
bool vis[N], flag = true;

void solve1() {//模拟整个过程
	for (int i = 1; i <= n; i ++) {
		memset(vis, 0, sizeof vis);
		vector <int> v;
		v.clear();
		for (int j = i; j <= n; j ++) {
			if (v.empty()) {
				v.push_back(a[j]);
				continue;
			}
			auto it = find(v.begin(), v.end(), a[j]);
			v.erase(it, v.end());//删除右侧所有元素O(n) 
			v.push_back(a[j]);
		}
		for (int x : v) {
			vis[x] = true;
		}
		for (int i = 1; i <= m; i ++) {
			ans[i] += vis[i];
		}
	}
	for (int i = 1; i <= m; i ++) cout << ans[i] << " ";
	//所以时间复杂度为 O(n^3) 
}

void solve2() {
	int cnt = 0;
	for (int i = 1; i <= n; i ++) {
		if (a[i] != a[i - 1]) {
			ans[a[i - 1]] = cnt;
			cnt = 1;
		}else cnt ++;
	}
	ans[a[n]] = cnt;
	for (int i = 1; i <= m; i ++) {
		ans[i] += ans[i - 1];
		cout << ans[i] << " ";
	}
}

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i ++) {cin >> a[i];flag &= (a[i] >= a[i - 1]);}
	if (flag) solve2();
	else solve1();//1~3
	return 0;
}
/*
首先，最后一次重复之后的数，每一局打出来的时候都有。
接着，去掉最后一次重复，倒数第二次重复之后到最后一次重复
3 1 2 1 3 2 3 1 2 1
最后一次重复是 1.那么ans[1]=10;
倒数第二次是 2，那么ans[2]=2; 
3 1 2 1 3 2 3 1 2 1    ->    1
  1 2 1 3 2 3 1 2 1    ->    1
    2 1 3 2 3 1 2 1    ->    2 1 
      1 3 2 3 1 2 1
        3 2 3 1 2 1
          2 3 1 2 1
            3 1 2 1
              1 2 1
                2 1
                  1
3 1 2 1 3 2 3 1 2 1
|       |   |
  |   |       |   |
    |     |     |
*/
