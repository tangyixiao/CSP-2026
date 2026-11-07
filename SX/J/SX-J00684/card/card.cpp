#include <bits/stdc++.h>
using namespace std;
int t[300005];
int b[300005];
int q[1000005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int head = 1, tail = 0;

	int a[500005];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (b[a[j]] == 0 || head > tail) {
				q[head] = a[j];
				tail++;
				b[a[j]] = 1;
				t[a[j]]++;
			} else {
				for (int k = head; k <= tail; k++) {
					if (a[k] == b[a[j]]) {
						tail = k;
						break;
						t[a[j]]++;
					}
				}
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << t[i] << " ";
	}
	return 0;
}
