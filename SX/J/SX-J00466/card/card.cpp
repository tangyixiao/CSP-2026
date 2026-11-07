#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	cin >> n >> m;
	int a[n + 1];
	int hash[m + 1];
	memset(hash, 0, sizeof(hash));
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		int head = a[i], tail = a[i];
		int nxt[n + 1];
		int pre[n + 1];
		memset(nxt, 0, sizeof(nxt));
		memset(pre, 0, sizeof(pre));
		pre[head] = 0;
		nxt[head] = 0;
		pre[tail] = 0;
		nxt[tail] = 0;

		for (int j = i + 1; j <= n; j++) {
			if (pre[a[j]] || nxt[a[j]]) {
				nxt[a[j]] = 0;
				tail = a[j];
			} else {
				nxt[tail] = a[j];
				pre[a[j]] = tail;
				tail = a[j];
				nxt[a[j]] = 0;
			}
		}
		for (int j = head; j != 0; j = nxt[j]) {
			hash[j]++;
		}

	}
	hash[a[n]] = n;
	for (int i = 1; i <= m; i++) {
		cout << hash[i] << " ";
	}
}