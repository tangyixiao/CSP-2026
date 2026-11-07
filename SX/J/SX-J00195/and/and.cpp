#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5+10;
int a[MAXN], b[MAXN], d[MAXN], e[MAXN];
bool c[MAXN][30], flag = 0;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, o;
	long long ans = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		b[i] = a[i];
		for (int j = 30; j >= 0; j--) {
			if (b[i] >= pow(2, j)) {
				c[i][30 - j] = 1;
				b[i] -= pow(2, j);
			}
		}
	}//
	for (int i = 0; i <= 30; i++) {
		int sum;
		for (int j = 1; j <= n; j++) {
			if (c[j][i] == 1) {
				sum++;
				c[j][i] = 0;
				d[sum] = a[j];
			} else {
				for (int k = 0; k <= 30; k++)
					c[j][i] = 0;
			}
		}
		if (sum > m || sum == 0) {
			sum = 0;
			memset(d, 0, sizeof(d));
			flag = 0;
			memset(e, 0, sizeof(e));
		} else if (sum < m && sum > 0) {
			flag = 1;
			for (int j = 1; j <= sum; j++)
				e[j] = d[j];
		} else if (sum == m) {
			o = sum;
			break;
		}

	}
	if (flag == 0) {
		for (int j = 2; j <= o; j++) {
			ans = (d[j] & d[j - 1]);
		}
	} else {
		for (int j = 2; j <= o; j++) {
			ans = (e[j] & e[j - 1]);
		}
	}
	cout << ans;
	return 0;
}