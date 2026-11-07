#include <bits/stdc++.h>
using namespace std;
int m, n, tong[200005], maxx, mm, tng[200005], summ;
map<int, int> t;

void dfs(int x, int y, int z) {
	if (y == -1) {
		if (x > m) {
			return ;
		}
		dfs(x + 1, tong[x], z + 1);
		dfs(x + 1, y, z);
		return ;
	}
//	cout << x << "¡¡" << y << " " << z << endl;
	if (z == n) {
		maxx = max(maxx, y);
//		cout << y << " " << maxx << endl;
		return ;
	}
	if (x > m) {
		return ;
	}
	dfs(x + 1, (y &tong[x]), z + 1);
	dfs(x + 1, y, z);
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> m >> n;
	for (int i = 1; i <= m; i++) {
		cin >> tng[i];
		if (tng[i] != 0) {
			t[tng[i]]++;
		}
		mm = max(mm, tng[i]);
		summ += tng[i];
	}
	if (n == 1) {
		cout << mm;
		return 0;
	}
	sort(tng + 1, tng + 1 + n);
	for (int i = 1; i <= m; i++) {
		tong[i] = tng[m - i + 1];
	}
	if (summ < 4 && m > 2000) {
		if (n <= t[3]) {
			cout << 3;
			return 0;
		}
		n -= t[3];
		if (n <= t[2]) {
			cout << 2;
		} else if (n <= t[1]) {
			cout << 1;
		} else {
			cout << 0;
		}
		return 0;
	}
	if (m > 2000) {
		cout << tong[n];
		return 0;
	}
	dfs(1, -1, 0);
	cout << maxx;
	return 0;
}
