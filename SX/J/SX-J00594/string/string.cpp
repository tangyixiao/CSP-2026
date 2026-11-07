#include <bits/stdc++.h>
using namespace std;

struct node {
	int x;
	char s;
} a[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	long long sum = 0, ans = 0;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i].x >> a[i].s;
	}
	string q, q2;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= a[i].x; ++j) {
			q += a[i].s;
		}
	}
	q2 = q;
	reverse(q.begin(), q.end());
	for (int i = 0; i < q.size(); ++i) {
		if (q2[i] != q[i])
			++ans;
	}
	cout << ans / 2 << endl;
	return 0;
}
