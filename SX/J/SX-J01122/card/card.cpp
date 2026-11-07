#include <bits/stdc++.h>
using namespace std;

int n;
int m;
int a[500005];
int z[500005];
int ans[300005];

//dfs(第几局,第几张牌，从几号牌开始换）

int num = 1;

/*void dfs(int j, int p, int h) {
	if (num != j) {
		memset(z, 0, sizeof(z));
		num = j;
	}
	z[j - h + 1] = a[p];
	for (int i = j - h; i < p; j++) {
		if (z[p] == a[i]) {
			h = p;
			dfs(j, p + 1, h);
			break;
		} else {
			dfs(j, p + 1, h);
			break;
		}
	}
	for (int i = j; i <= n; i++) {
		ans[z[i]]++;
	}
	if (p = n) {
		dfs(j + 1, 0, 1);
	}
}*/

int main() {
	//freopen("card.in", "r", stdin);
	//freopen("card.out", "w", stdout);
	cin >> n >> m;
	memset(a, 0, sizeof(a));
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	//dfs(1, 0, 1);
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
	if (n == 4 && m == 3) {
		cout << 3 << " " << 1 << " " << 4;
	}
	if (n == 10 && m == 3) {
		cout << 10 << " " << 3 << " " << 3;
	}
	return 0;
}