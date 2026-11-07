#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
int x[N];
int y[N], ans[N];

int fid(int x1, int cnt) {
	//cout << x1 << "()" << cnt << endl;
	for (int i = 0; i <= cnt; i++) {
		if (y[i] == x1) {
			return i;
		}
	}
	y[cnt + 1] = x1;
	return cnt + 1;
}

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;//1 2 1 3   1 2  1   1 3
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	for (int i = 0; i < n; i++) {
		int cnt = n - i - 1;
		int cc = 0;
		for (int i1 = i; i1 < n; i1++) {
			y[cc++] = x[i1];
		}
		for (int j = i; j < n; j++) {
			cnt = fid(x[j], cnt);
			//cout << "**" << cnt << "**" << endl;
		}
		for (int i2 = 0; i2 <= cnt; i2++) {
			//cout << "^^^^" << y[i2];
			ans[y[i2]]++;
		}
	}
	for (int i = 1; i < m + 1; i++) {
		cout << ans[i] << " ";
	}
	return 0;

}
