#include <bits/stdc++.h>
using namespace std;
int m, n, a[200005], flag[300005], t[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	vector<int>q;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			int flg = 0;
			for (int k = 1; k <= m; k++) {
				if (a[j] == q[k]) {
					q.empty();
					break;

				}
			}

			q.push_back(a[j]);

		}
		int ai = 0;
		for (auto it = q.begin(); it <= q.end(); it++) {
			ai++;
			t[q[ai]]++;
		}
	}
	for (int i = 1; i <= m; i++)
		cout << t[i] << " ";
	return 0;
}
