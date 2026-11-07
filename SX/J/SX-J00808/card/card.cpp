#include <bits/stdc++.h>
using namespace std;
int n, m;
int s[500010], pre[300010], sum[300010];
bool pd[300010];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &s[i]);
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++)
			pd[j] = false;
		for (int j = i; j <= n; j++) {
			if (pd[s[j]]) {
				for (int k = pre[s[j]]; k < j; k++) {
					pd[s[k]] = false;
				}
				pd[s[j]] = true;
				pre[s[j]] = j;
			} else {
				pd[s[j]] = true;
				pre[s[j]] = j;
			}
		}
		for (int j = 1; j <= m; j++) {
			if (pd[j]) {
				sum[j]++;
			}
		}
	}
	for (int j = 1; j <= m; j++) {
		printf("%d ", sum[j]);
	}
	return 0;
}

