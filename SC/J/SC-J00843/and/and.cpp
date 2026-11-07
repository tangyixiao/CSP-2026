#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> a;
void dfs(int x, int val, int m, int& ans){
	if (m == 0) {
		ans = max(ans, val);
		return;
	}
	for (int i = x;i <= n;i ++) {
		if (val == -1) dfs(i + 1, a[i], m - 1, ans);
		else dfs(i + 1, a[i] & val, m - 1, ans);
	}
}
void solve1(){
	int ans = 0;
	dfs(1, -1, m, ans);
	cout << ans;
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	a.assign(n + 1, 0);
	for (int i = 1;i <= n;i ++) cin >> a[i];
	solve1();
	return 0;
} 

/*
4 2
3 15 12 12

*/