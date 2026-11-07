#include <bits/stdc++.h>
using namespace std;

struct Node1 {
	long long a;
	char c;
} h[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> h[i].a >> h[i].c;
	}
	int l = 1, r = n, ans = 0;
	while (l < r) {
		if (h[l].a > h[r].a) {
			if (h[l].c != h[r].c)
				ans += h[r].a;
			h[l].a -= h[r].a;
			r--;
		} else {
			if (h[l].c != h[r].c)
				ans += h[l].a;
			h[r].a -= h[l].a;
			l++;
		}
	}
	cout << ans;
	return 0;
}
