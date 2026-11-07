#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+5, M = 3e5+5;
int n, m;
int a[N], ans[M], lst[M], cnt[M];
vector<int> p[M];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		p[a[i]].push_back(i);
		lst[a[i]] = i;
	}
//	for (int i = 1; i <= m; i++) {
//		cout << lst[i] << ' ';
//	}
//	cout << endl;
	for (int i = 1; i <= n; i++) {
		memset(cnt, 0, sizeof cnt);
//		cout << i << endl;
		for (int j = i; j <= n; j++) {
			if (j == lst[a[j]]) {
//				cout << i << " " << a[j] << endl;
				ans[a[j]]++;
				continue;
			}
			while (p[a[j]][cnt[a[j]]] != lst[a[j]]) {
				cnt[a[j]]++;
				j = p[a[j]][cnt[a[j]]];
//				cout << j << endl;
			}
			if (j == lst[a[j]]) {
//				cout << i << " " << a[j] << endl;
				ans[a[j]]++;
			}
		}
	}
	for (int i = 1; i <= m; i++)
		cout << ans[i] << ' ';
	return 0;
}
/*
4 3
1 2 1 3
10 3
3 1 2 1 3 2 3 1 2 1
*/
