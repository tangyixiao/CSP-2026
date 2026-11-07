#include <bits/stdc++.h>
using namespace std;
const int MAXN = 5e5+10;
int a[MAXN], table[MAXN], num[MAXN];

int main() {
	int n, m, cnt = 0;
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; i <= n; i++) {
			bool flag = 1;
			for (int k = 0; k < cnt; k++) {
				if (table[k] == a[j]) {
					flag = 0;
					int aa = 0;
					for (int o = j; o <= n; o++) {
						if (a[o] == 0) {
							aa = o;
							break;
						}
					}
					for (int o = k; o < cnt; o++) {
						a[aa] = table[k];
						table[k] = 0;
						aa++, k++;
					}
				}
			}
			if (flag) {
				table[cnt] = a[j];
				a[j] = 0;
				cnt++;
			}
		}
		for (int j = 0; j < cnt; j++) {
			for (int k = 1; k <= m; k++) {
				if (table[j] == k)
					num[k]++;
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		if (num[i] > 0) {
			cout << num[i] << " ";
		}
	}
	return 0;
}