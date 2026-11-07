#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
int a[N];
int n, m;
bool flag = 0;
int num[40];
vector<int> b[40];

void cmpt(int lo, int x) {
	int cnt = 1;
	while (x > 0) {
		if (x & 1) {
			num[cnt]++;
			b[cnt].push_back(a[lo]);
		}
		cnt++;
		x >>= 1;
	}
}
int f[2][N];

void dp(int w) {
//	cout << w << endl;
	int i = 0;
	f[0][0] = INT_MAX;
	for (int x : b[w]) {
		i++;
		for (int j = 1; j <= n; j++) {
			int now = i & 1;
			int pre = !now;
			f[now][j] = max(f[pre][j], f[pre][j - 1] & x);
		}
	}
	cout << f[i & 1][m] << endl;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		cmpt(i, a[i]);
	}
//	for (int i = 0; i <= 32; i++) {
//		cout << i << " " << num[i] << endl;
//		for (int x : b[i])
//			cout << x << ' ';
//		cout << endl;
//	}
	for (int i = 32; i >= 0; i--) {
		if (num[i] >= m) {
			flag = 1;
			dp(i);
			break;
		}
	}
	if (!flag)
		cout << 0 << endl;
	return 0;
}
/*
4 2
3 15 12 12
5 3
31 3 1 15 7

*/
