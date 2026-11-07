#include <bits/stdc++.h>//»Æ Ì°ÐÄ 25(dfs±©Á¦)+5(m=1)+5(m=n)+15(m=2)+10(m<4)=60
using namespace std;
const int N = 2e5+5;
int a[N];
int ans;
int n, m;
int t[10];

void dfs(int x, int y, int s) {
	if (y == m) {
		ans = max(ans, s);
		//cout << s << '\n';
		return;
	}
	if (x > n)
		return;
	dfs(x + 1, y + 1, s &a[x]);
	dfs(x + 1, y, s);
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + 1 + n);
	if (m == 1) {
		cout << a[n];
		return 0;
	}
	if (m == n) {
		ans = a[1];
		for (int i = 2; i <= n; i++) {
			ans = ans &a[i];
		}
		cout << ans;
		return 0;
	}
	if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				ans = max(ans, a[i] & a[j]);
			}
		}
		cout << ans;
		return 0;
	}
	int v = pow(2, 31) - 1;
	if (n <= 20) {
		dfs(1, 0, v);
		cout << ans;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		t[a[i]]++;
	}
	if (t[3] >= m)
		cout << 3;
	else if (t[3] + t[2] >= m)
		cout << 2;
	else if (t[3] + t[1] >= m)
		cout << 1;
	else
		cout << 0;
	return 0;
}
/*
5 3
31 3 1 15 7
*/
