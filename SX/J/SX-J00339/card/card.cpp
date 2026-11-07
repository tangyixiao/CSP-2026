#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int n, m, a[N], top, sum[N], vis[N];

struct card {
	int id, num;
} q[N];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++) {
		for (int g = 1; g <= n; g++)
			q[g].num = q[g].id = 0;
		int j = 1, top = 0;
		while (j <= n) {
			if (vis[j] == 1) {
				j++;
				continue;
			}
			for (int k = 1; k <= top; k++) {
				if (q[k].num == a[j]) {
					top -= (top - k + 1);
					vis[k] = 1;
					break;
				}
			}
			q[++top].num = a[j], q[top].id = j;
			j++;
		}
		int y = q[1].id, f = 0;
		for (int e = y - 1; e >= 1; e--)
			if (vis[e] == 0)
				f = 1;
		if (f == 0)
			vis[q[1].id] = 1;
		for (int c = 1; c <= top; c++)
			cout << q[c].num << " ";
		cout << "\n";
		for (int c = 1; c <= top; c++)
			sum[q[c].num]++;
	}
	for (int i = 1; i <= m; i++)
		cout << sum[i] << " ";
	return 0;
}
