#include <bits/stdc++.h>
using namespace std;
int a[200005], maxx = 0, n, m;
int book[200005], s = 0;

void dfs(int k) {
	if (k > n) {
		if (s == m) {
			int sum = 0, t = 0;
			for (int i = 1; i <= n; i++) {
				if (book[i] == 1) {
					sum = a[i];
					t = i;
					break;
				}
			}
			for (int i = t + 1; i <= n; i++) {
				if (book[i] == 1) {
					sum = (sum &a[i]);
				}
			}
			if (sum > maxx)
				maxx = sum;
		}
		return;
	}

	s++;
	book[k] = 1;
	dfs(k + 1);
	s--;
	book[k] = 0;
	dfs(k + 1);
}

int main() {
//	freopen("and.in", "r", stdin);
//	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	dfs(1);
	cout << maxx;
}
