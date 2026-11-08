#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int input() {
	int x;
	cin >> x;
	return x;
}
int a[500005], b[500005], c[500005];
map<int, int> ans;
void f(int u, int n) {
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));
	int t = u, cnt = u;
	while (cnt < n) {
		if (c[a[cnt]]) t = cnt, cnt ++;
		else {
			b[t] = a[cnt];
			c[a[cnt]] = t, cnt ++;
		}
	}
	for (int i = 1; i <= n; i ++) ans[b[i]] ++;
}
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
    int n = input(), m = input();
    for (int i = 1; i <= n; i ++) a[i] = input();
    for (int i = 1; i <= n; i ++) f(i, n);
    for (int i = 1; i <= m; i ++) cout << ans[i] << " ";
	return 0;
}
/*
可以简化成判断在i之前出现的牌有没有在i之后出现 
a_i: i最后一次出现的位置
b_i: i第一次出现的位置 
4 3
1 2 1 3
   1 2 3
a: 3 2 4
b: 1 2 4

10 3
3 1 2 1 3 2 3 1 2 1
   1  2 3
a: 10 9 7
b: 2  3 1
*/
