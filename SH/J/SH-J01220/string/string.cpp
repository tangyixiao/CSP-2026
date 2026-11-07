#include<bits/stdc++.h>
using namespace std;

struct node {
	int x;
	char c;
} a[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	int n;
	long long sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i].x >> a[i].c, sum += a[i].x;
	long long ans = 0;
	for (int l = 1, r = n; l < r;) {
		if (a[l].c != a[r].c) ans += min(a[l].x, a[r].x);
		if (a[l].x >= a[r].x) a[l].x -= a[r].x, a[r].x = 0;
		else a[r].x -= a[l].x, a[l].x = 0;
		if (a[l].x == 0) l++;
		if (a[r].x == 0) r--;
	}
	cout << ans << endl;
	return 0;
}
