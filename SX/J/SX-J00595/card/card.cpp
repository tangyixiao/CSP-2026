#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+5, M = 3e5+5;
int n, m, a[N], pos[M], t[M];

void f(int st, int end) {
	for (int i = st; i <= end; i++)
		pos[i] = 0;
}

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	int r = 0;
	for (int i = 1; i <= m; i++) {
		r = 0;
		memset(pos, 0, sizeof(pos));
		for (int j = i; j <= n; j++) {
			if (pos[a[j]] != 0) {
				f(pos[a[j]] + 1, r);
				r = pos[a[j]];
			} else {
				pos[a[j]] = r + 1;
				r++;
			}
		}
		for (int j = 1; j <= m; j++) {
			if (pos[j] != 0)
				t[j]++;
		}
	}
	for (int i = 1; i <= m; i++)
		cout << t[i] << ' ';
	return 0;
}