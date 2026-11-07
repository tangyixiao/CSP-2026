#include <bits/stdc++.h>
using namespace std;
int a[500005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	queue<int>  q;
	queue<int> o;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		q.push(x);
	}
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			int t = q.top();
			for (int x = o.size() - 1; x >= 0; x ++) {
				if (x == t)
					for (int y = o.size() - 1; y >= 0; y --) {
						int c = o.top();
						q.push(c);
						o.pop();
					}
			}
			o.push(t);
		}
		while (o.empty()) {
			a[o.top()]++;
			q.push(o.top());
			o.pop();
		}
		cout << a[i] << ' ';
	}
	return 0;
}
