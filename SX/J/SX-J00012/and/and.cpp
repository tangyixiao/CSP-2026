#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, m, a[200005], sum, maxx = -1, vis[200005], vis1 = 1;

void dfs(ll k) {
	if (k == m + 1) {
		//cout << endl;
		maxx = max(maxx, sum);
		return;
	}
	for (int i = vis1; i <= n; i++) {
		if (k == 1) {
			sum = a[i];
			vis1 = i;
			dfs(k + 1);
			//	sum=0;
		}
		ll sum1 = sum;
		if (!vis[i] && i > vis1 && vis1 != i) {
			sum &= a[i];
			vis[i] = 1;
			dfs(k + 1);
			sum = sum1;
			vis[i] = 0;
		}

	}
	if (k == 2)
		vis1 += 1;
//1 3
//2
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	dfs(1);
	cout << maxx;
	return 0;
}
