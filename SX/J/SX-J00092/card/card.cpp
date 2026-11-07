#include <bits/stdc++.h>
using namespace std;
int n, m, a[10005], ans[10005], xl[10005], bz[10005], pd;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> xl[i];
		bz[xl[i]]++;
	}
	for (int i = 1; i < n; i++) {
		for (int k = 1; k <= m; k++) {
			a[k] = 0;
		}
		pd = 0;
		for (int j = i; j <= n; j++) {
			a[xl[j]]++;
			if (a[xl[j]] == 1 && bz[xl[j]] > 1) {
				pd++;
			}
			if (a[xl[j]] == bz[xl[j]] && a[xl[j]] > 1)
				pd--;
			if (pd == 0) {
				ans[xl[j]]++;
			}
		}
		bz[xl[i]]--;

	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] + 2 << " ";
		cout << endl;

	}


}
