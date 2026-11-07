#include <bits/stdc++.h>
using namespace std;
int n;
int m;
int a[500005];

struct node {
	int frt, x;
} edge[500005];
int head[500005];
int f[5000005];

int main() {
//	freopen("string.in", "r", stdin);
//	freopen("string.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		edge[i].frt = head[a[i]];
		head[a[i]] = i;
	}
	for (int i = n; i >= 1; i--) {
		if (edge[i].frt != 0) {
			f[i + 1]++;
			f[edge[i].frt]--;
		}
	}
	int ans = n;
	for (int i = 1; i <= n; i++) {
		ans -= f[i];
		cout << ans;
	}
	return 0;
}