#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[500005];
int zhan[500000];
int top = 1;
int t[300005];
int res[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	for (int o = 1; o <= n; o++) {
		memset(t, 0, sizeof t);
		memset(zhan, 0, sizeof zhan);
		top = 1;
		int j = o;
		while (j <= n) {
			if (t[a[j]] != 1) {
				zhan[top++] = a[j];
				t[a[j]]++;
			} else {
				while (zhan[top - 1] != a[j]) {
					t[zhan[--top]]--;
				}
			}
			j++;
		}
		for (int i = 1; i < top; i++) {
			res[zhan[i]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		printf("%d ", res[i]);
	}
	return 0;
}