#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int n, m;
long long lan[N];
long long ans = 0;
void dfs(int num, int cu, long long s) {
	if(cu == m) {
		ans = max(ans, s);
		return;
	}
	for(int i = num + 1; i <= n; i++) {
		dfs(i, cu + 1, lan[i] & s);
	}
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> lan[i];
	for(int i = 1; i < n; i++) dfs(i, 1, lan[i]);
	cout << ans;
	return 0;
}