#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn = 3e5+5;
ll n, m, top;
ll a[maxn], stk[maxn], vis[maxn], ans[maxn];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		top = 0;
		for (int i = 1; i <= m; i++) vis[i] = 0;
		for (int j = i; j <= n; j++) {
			if (vis[a[j]]) {
				while (top) {
					vis[stk[top]]--;
					top--;
					if (stk[top+1] == a[j]) break;
				}
			}
			stk[++top] = a[j];
			vis[a[j]]++;
		}
		for (int i = 1; i <= top; i++) {
			ans[stk[i]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i];
		if (i != m) cout << ' ';
	}
	cout << '\n';
	return 0;
}
