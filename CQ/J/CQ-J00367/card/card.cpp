#include <bits/stdc++.h>
using namespace std;
const int MAXN = 5e5 + 5;
const int MAXM = 3e5 + 5;
int n, m;
int a[MAXN];
int cnt[MAXM], lst[MAXM];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		lst[a[i]] = i;
	}
	for (int s = 1; s <= n; s++) {
		int i = s;
		while (i <= n) {
			cnt[a[i]]++;
			i = lst[a[i]] + 1;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << cnt[i] << ' ';
	}
	return 0;
}
