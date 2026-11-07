#include <bits/stdc++.h>
using namespace std;
int n, ans;
string ss;

struct nobe {
	string s;
	int l;
} a[200005];
nobe b[200005];
stack<string>q;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1, j = n; i <= n; i++, j--) {
		cin >> a[i].l >> a[i].s;
		b[j].l = a[i].l;
		b[j].s = a[i].s;
	}
	for (int i = 1; i <= n / 2 + 1; i++) {
		while (a[i].l != 0) {
			q.push(a[i].s);
			q.push(b[i].s);
			a[i].l--;
			if (a[i].s == b[i].s) {
				q.pop();
				q.pop();
			} else {
				q.pop();
			}
		}

	}
	while (!q.empty()) {
		q.pop();
		ans ++;
	}
	cout << ans;
	return 0;
}