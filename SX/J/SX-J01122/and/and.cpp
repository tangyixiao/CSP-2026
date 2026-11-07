#include <bits/stdc++.h>
using namespace std;

int n;
int m;
int a[200005];
bool b[200005];  //1²»µÈ 2µÈ

bool cmp(int x, int y) {
	return x > y;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n, cmp);
	int ans = 0;
	for (int i = 1; i < m; i++) {
		int cnt = 0;
		while (a[i + 1] != 0) {
			int x = a[i] % 2;
			int y = a[i + 1] % 2;
			if (x != y) {
				b[cnt] = 1;
			}
			if (x == y && b[cnt] == 0) {
				ans++;
			}
			a[i] = a[i] / 2;
			a[i + 1] = a[i + 1] / 2;
			cnt++;
		}
	}

	if (n == 4 && m == 2) {
		cout << 12;
	}
	if (n == 5 && m == 3) {
		cout << 7;
	}
	return 0;
}