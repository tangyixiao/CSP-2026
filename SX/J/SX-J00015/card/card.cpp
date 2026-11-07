#include <bits/stdc++.h>
using namespace std;

const int N = 500005;
int a[N];
int table[N];

int i_number[300005] = {0};

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n = 0, m = 0, s = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		s = 0;
		for (int j = i - 1; j <= n; j++) {
			if (s == 0) {
				table[s] = a[j];
				s++;
				continue;
			}
			for (int p = 0; p <= s; p++) {
				if (table[p] == a[j]) {
					for (int t = p; t <= s; t++) {
						table[t] = 0;
					}
					s = p;
					break;
				}
			}
			table[s] = a[j];
			s++;
		}
		for (int j = 1; j <= m; j++) {
			for (int o = 0; o < s; o++) {
				if (table[o] == j) {
					i_number[j - 1]++;
					break;
				}
			}
		}
		for (int j = 0; j < s; j++) {
			table[j] = 0;
		}
	}
	for (int i = 0; i < m; i++) {
		cout << i_number[i] << ' ';
	}

	return 0;
}
