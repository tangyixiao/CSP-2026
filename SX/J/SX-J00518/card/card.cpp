#include <bits/stdc++.h>
using namespace std;
int n, m;
const int N = 5e5+5, M = 3e5+5;
int a[N], cnt[M];
bool vis[M];
stack<int>s;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];

	for (int i = 1; i <= n; i++) {
		memset(vis, 0, sizeof vis);
		for (int j = i; j <= n; j++) {
			if (vis[a[j]]) {
				while (s.top() != a[j]) {
					vis[s.top()] = 0;
					s.pop();
				}
			} else {
				s.push(a[j]);
				vis[a[j]] = 1;
			}
		}
		while (!s.empty()) {
			++cnt[s.top()];
//			cout << "µÚ" << i << "¾ÖÓÐ" << s.top() << endl;
			s.pop();
		}
	}
	for (int i = 1; i <= m; i++)
		cout << cnt[i] << ' ';
//	bool f = 1;
//	for (int i = 1; i <= m; i++) {
//		int x;
//		cin >> x;
//		if (x != cnt[i])
//			f = 0;
//	}
//	cout << endl << f;
	return 0;
}




