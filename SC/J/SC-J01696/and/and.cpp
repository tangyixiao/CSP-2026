#include<bits/stdc++.h>
using namespace std;
long long n, m, a[5000005], vis[5000005], max_ans = -1; //???没更新？
void dfs_plus(long long last_step_ans, long long goal_index, long long useage) {
	long long my_step_ans = last_step_ans&a[goal_index];
	if (goal_index > n) {
		return;
	}
	if (useage > m) {
		return;
	}
	if (my_step_ans > max_ans && goal_index == m) {
		max_ans = my_step_ans;
	}
	if (vis[goal_index+1] == 0) {
		vis[goal_index+1] = 1;
		dfs_plus(my_step_ans, goal_index+1, useage + 1);
		vis[goal_index+1] = 0;
		dfs_plus(last_step_ans,goal_index+1,useage);
	}
}
int main() {
	memset(vis, 0, sizeof(vis));
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	dfs_plus(0, 1, 1);
	cout << max_ans;
}