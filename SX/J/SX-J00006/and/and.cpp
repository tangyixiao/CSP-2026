#include <bits/stdc++.h>
using namespace std;
int n, m;

long long yyy[300000] = {}, y[300000][200] = {}, yy[1000000];
int awy(int a, int b) {
	int zj[300000] = {};
	int lj = 0;
	for (int i = 0; i < max(yyy[a], yyy[b]); i++) {
		zj[i] = min(y[a][i], y[b][i]);
	}
	for (int i = 0; i < max(yyy[a], yyy[b]); i++) {
		lj += pow(2,  i ) * zj[i];
	}
	return lj;
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	int mmax = INT_MIN;
	int l;
	for (int i = 1; i <= n; i++) {
		cin >> l;
		mmax = max(mmax, l);
		int head = 0;
		memset(yy, 0, sizeof(yy));
		while (l > 0) {
			yy[head] = l % 2;
			l /= 2;
			head++;
		}
		yyy[i] = head - 1;
		for (int j = 0; j < head; j++) {
			y[i][j] = yy[ j];
		}
	}
	if (m == 1) {
		cout << mmax;
		return 0;
	}
	if (m == 2) {
		int xmax = INT_MIN;
		for (int i = 1; i < n; i++) {
			for (int j = i + 1; j <= n; j++) {
				xmax = max(xmax, awy(i, j));
			}
		}
		cout << xmax << endl;
		return 0;
	}
	return 0;
}