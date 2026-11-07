#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
int n, m, a[500005], cnt[300005];

struct zhizhen {
	int data;
	zhizhen *next;
} b[500005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> b[i].data;
	}
	for (int i = 1; i < n; i++) {
		b[i].next->data;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			for (int k = 1; k <= n; k++) {
				if (b[k].data == 0)
					break;
				if (a[j] == b[k].data) {
					b[j].data == a[j];
					b[k].next->data;
				}
			}
		}
		zhizhen *p = &b[1];
		int bh = 1;
		for (int j = 1; j <= m; j++) {
			if (p->data == j) {
				cnt[j]++;
				break;
			} else {
				p->next;
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << cnt[i] << ' ';
	}
	return 0;
}