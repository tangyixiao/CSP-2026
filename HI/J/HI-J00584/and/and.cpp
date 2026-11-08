#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int n, m, a[200005], ans;
void dfs(int j, int num, int step) {
	if (step >= m) {
		ans = num;
		return;
	}
	for (int l=j+1; l<=n; l++) if (num&a[l] > ans) dfs(l, num&a[l], step+1);
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i=1; i<=n; i++) cin >> a[i];
	for (int i=1; i<=n-m+1; i++) if (a[i] > ans) dfs(i, a[i], 1);
	cout << ans;
	return 0;
}
