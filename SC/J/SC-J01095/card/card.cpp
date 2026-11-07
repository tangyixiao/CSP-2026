#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 10, M = 3e5 + 10;
int n, m;
int a[N];
int x[N], cnt[M], ed;
int to[M];
int main () {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		to[a[i]] = i;
	}
	for (int i = 1; i <= n; i++) {
		ed = 0;
		for (int j = i; j <= n; j++) {
			x[++ed] = a[j];
			j = to[a[j]];
		}
		for (int j = 1; j <= ed; j++) {
			cnt[x[j]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << cnt[i] << " ";
	}
	return 0;
}