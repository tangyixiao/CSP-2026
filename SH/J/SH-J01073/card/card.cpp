#include <bits/stdc++.h>

#define MAXN 500005

int n, m;
int a[MAXN];
int a_count[MAXN] = {0};

int now_card[MAXN];
int now_card_count[MAXN];
int ans[MAXN] = {0};

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);

	scanf("%d%d", &n, &m);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		a_count[a[i]]++;
	}

	for (int i = 1; i <= n; i++) {
		memset(now_card, 0, sizeof(now_card));
		memset(now_card_count, 0, sizeof(now_card_count));

		int card_count = 0;

		for (int j = i; j <= n; j++) {
			int card = a[j];

			if (now_card_count[card] > 0) {
				for (int x = j - 1; a[x] != card && x >= i; x--) {
					int x_card = a[x];

					now_card_count[x_card]--;
					if (now_card_count[x_card] < 0) {
						now_card_count[x_card] = 0;
					}
				}
			} else {
				now_card_count[card]++;
			}
		}

		/**
		printf("%d: ", i);
		for (int j = 1; j <= n; j++) {
			printf("%d-%d ", j, now_card_count[j]);
		}
		printf("\n");
		*/

		for (int j = 1; j <= n; j++) {
			if (now_card_count[j] > 0) {
				ans[j]++;
			}
		}
	}

	for (int i = 1; i <= m; i++) {
		printf("%d ", ans[i]);
	}

	printf("\n");

	return 0;
}
