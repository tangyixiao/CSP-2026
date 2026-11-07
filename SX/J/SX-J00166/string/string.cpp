#include <bits/stdc++.h>
using namespace std;

struct Edge {
	long long a;
	char b;
} e[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> e[i].a >> e[i].b;
	}
	int l = 1, r = n;
	long long ans = 0;
	while (l < r) {
		if (e[l].b == e[r].b) {
			if (e[l].a == e[r].a) {
				l++, r--;
				continue;
			} else {
				long long num = max(e[l].a, e[r]. a);
				if (num == e[l].a) {
					e[l].a = e[l].a - e[r].a;
					r--;
				} else {
					e[r].a = e[r].a - e[l].a;
					l++;
				}
			}
		} else {
			if (e[l].a == e[r].a) {
				l++, r--;
				ans += e[l].a;
				continue;
			} else {
				long long num = max(e[l].a, e[r]. a);
				if (num == e[l].a) {
					e[l].a = e[l].a - e[r].a;
					ans += e[r].a;
					r--;
				} else {
					e[r].a = e[r].a - e[l].a;
					ans += e[l].a;
					l++;
				}
			}
		}
	}
	cout << ans;
	return 0;
}
