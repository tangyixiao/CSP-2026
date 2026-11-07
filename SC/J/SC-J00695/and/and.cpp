#include <bits/stdc++.h>
using namespace std;

const int L = 200005;
int a[L];
bool b[L][35];
int cnt[35];
int c[L];
bool ans[35];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	for (int i = 0; i < n; i++) {
		int x = a[i];
		for (int j = 0; x > 0; j++) {
			b[i][j] = x % 2;
			x /= 2;
			cnt[j] += b[i][j];
		}
	}
	
	int si = -1;
	for (int i = 0; i < 35; i++) {
		if (cnt[i] >= m) {
			si = i;
		}
	}
	if (si != -1) ans[si] = 1;
	
	while (1) {
		int num = 0;
		for (int i = 0; i < n; i++) {
			if (b[i][si] == 1) {
				c[num] = i;
				num++;
			}
		}
	
		memset(cnt, 0, sizeof(cnt));
		for (int i = 0; i < num; i++) {
			for (int j = 0; j < si; j++) {
				cnt[j] += b[c[i]][j];
			}
		}
	
		int y = -1;
		bool out = 1;
		for (int i = 0; i < si; i++) {
			if (cnt[i] >= m) {
				y = i;
				out = 0;
			}
		}
		if (out) break;
		si = y;
		if (y != -1) ans[si] = 1;
	}
	
	int sum = 0;
	int z = 1;
	for (int i = 0; i < 35; i++) {
		sum += z * ans[i];
		z *= 2;
	}
	cout << sum;
	
	return 0;
}