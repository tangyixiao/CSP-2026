#include<bits/stdc++.h>
using namespace std;
int n, m;
int a[500010];
int cnt[300010];
int main () {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
//	cout << 'a';
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
//		cout << 'a';
	}
//	cout << 'c';
	for (int i = 1; i <= n; i++) {
//		cout << 'b';
		stack<int> q;
		map<int, int> mp;
//		cout << 'a';
		for (int j = i; j <= n; j++) {
			if (mp[a[j]]) {
				while (q.top() != a[j]) {
					mp[q.top()]--;
					q.pop();
				}
			} else {
				q.push(a[j]);
				mp[a[j]] = 1;
			}
//			cout << 'a';
		}
		while (!q.empty()) {
			cnt[q.top()]++;
			q.pop();
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << cnt[i] << ' ';
	}
	return 0;
}