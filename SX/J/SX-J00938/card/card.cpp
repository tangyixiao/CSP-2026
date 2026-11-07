#include <bits/stdc++.h>
using namespace std;
int cnt[300009];
char x[500009];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	string a;
	int n, m, i, j;
	cin >> n >> m;
	for (i = 1; i <= n; i++)
		cin >> x[i];
	for (i = 1; i <= n; i++) {
		a = "";
		for (j = i; j <= n; j++) {
			int t = a.find(x[j]);
			if (t == -1)
				a += x[j];
			else {
				a.erase(t);
				a += x[j];
			}
		}
		int len = a.size();
		for (j = 0; j < len; j++)
			cnt[a[j] - '0']++;
	}
	for (i = 1; i <= m; i++)
		cout << cnt[i] << " ";
	return 0;
}
