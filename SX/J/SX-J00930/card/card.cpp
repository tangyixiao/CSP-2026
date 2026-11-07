#include <bits/stdc++.h>
using namespace std;
int qwe[300002];
int card[500002];
int qq[500002];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> card[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (qwe[card[j]] == 0) {
				qwe[card[j]] = j;
			} else {
				for (int q = 1; q <= m; q++) {
					if (qwe[q] > qwe[card[j]] && qwe[q] < j) {
						qwe[q] = 0;
					}
				}
			}
		}
		for (int w = 1; w <= m; w++) {
			if (qwe[w] != 0) {
				qq[w]++;
				qwe[w] = 0;
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << qq[i] << " ";
	}
	return 0;
}
