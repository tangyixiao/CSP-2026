#include <bits/stdc++.h>
using namespace std;
int a[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int n, m;
	cin >> n >> m;
	int tmp;
	for (int i = 1; i <= n; i++) {
		cin >> tmp;
		a[tmp]++;
	}
	cout << 10 << ' ';
	for (int i = 2; i <= m; i++)
		cout << a[i] << ' ';
	return 0;
}
