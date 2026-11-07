#include <bits/stdc++.h>
// define int long long
using namespace std;
const int N = 2e5+5;
int n;

struct T {
	int a;
	char b;
} e[N];
long long ans;

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> e[i].a >> e[i].b;
	}
	for (int i = 1, j = n; i <= j; ) {
		if (e[i].b != e[j].b) {
			if (e[i].a >= e[j].a) {
				ans += e[j].a;
				e[i].a -= e[j].a;
				j--;
				if (e[i].a == 0)
					i++;
			} else {
				ans += e[i].a;
				e[j].a -= e[i].a;
				i++;
				if (e[j].a == 0)
					j--;
			}
		} else {
			if (e[i].a >= e[j].a) {
				e[i].a -= e[j].a;
				j--;
				if (e[i].a == 0)
					i++;
			} else {
				e[j].a -= e[i].a;
				i++;
				if (e[j].a == 0)
					j--;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}
