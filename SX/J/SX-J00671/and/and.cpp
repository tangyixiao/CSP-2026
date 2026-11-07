#include <bits/stdc++.h>
using namespace std;
int a[500005], e[500005], f[500005];
bool b[500005][35];

void A(int c, int d) {
	for (int j = 30; j >= 0; j--)
		if ((d & int(pow(2, j))))
			b[c][j] = 1;

}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		A(i, a[i]);
	}
	for (int i = 30; i >= 0; i--) {
		int sum = 0, cnt = 0;

		for (int j = 1; j <= n; j++)
			if (b[j][i])
				sum++, e[sum] = j;
		if (sum == m) {
			cnt = e[1];
			for (int j = 2; j <= m; j++)
				cnt = (e[j] & cnt);
			cout << cnt;
			return 0;
		}
		if (sum > m) {
			int summ = 0;
			for (int j = i + 1; j >= 0; j--) {
				for (int k = 1; k <= sum; k++) {
					if (b[e[k]][j])
						summ++, f[summ] = k;
				}
				if (summ == m) {
					cnt = f[1];
					for (int k = 2; k <= m; k++)
						cnt = (f[k] & cnt);
					cout << cnt;
					return 0;
				}
			}
		}
	}
	return 0;
}
