#include <bits/stdc++.h>
using namespace std;
int num[200005], n, m, b[200005];

void make(int a[], int h) {
	int l = 0, c[200005], vis[200005];
	memset(vis, 0, sizeof(vis));
	for (int i = h;; i++) {
		if (a[i] != 0) {
			l++;
			c[i - h + 1] = a[i];
		} else {
			break;
		}
	}
	for (int i = 1; i <= l; i++) {
		for (int j = i + 1; j <= l; j++) {
			if (c[i] == c[j] && c[i] != 0) {
				for (int k = i; k < j; k++)
					vis[k] = 1;
				i = j ;
			}
		}
	}
	for (int i = 1; i <= l; i++) {
		if (vis[i] == 0)
			num[c[i]]++;
	}
}

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> b[i];
	}
	for (int i = 1; i <= n; i++) {
		make(b, i);
	}
	for (int i = 1; i <= m; i++) {
		cout << num[i]  << " ";
	}
	return 0;
}
/*
4 3
1 2 1 3
*/
