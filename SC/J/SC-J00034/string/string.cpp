#include"bits/stdc++.h"
#define int long long
using namespace std;
const int N = 2e5 + 5;
int n, pre[N];
struct node {
	int a;
	char c;
} a[N];
signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].a >> a[i].c;
		pre[i] = pre[i - 1] + a[i].a;
	}
	int l = 1, r = pre[n], ans = 0;
	for (int i = 1, j = n; i <= j;) {
		int di = pre[i] - l + 1, dj = r - pre[j - 1];
		if (di == dj) {
			ans += (a[i].c != a[j].c) * di;
			l = pre[i] + 1, r = pre[j - 1];
			i++, j--;
		}
		else if (di < dj) {
			ans += (a[i].c != a[j].c) * di;
			l = pre[i] + 1, r -= di;
			i++;
		}
		else {
			ans += (a[i].c != a[j].c) * dj;
			l += dj, r = pre[j - 1];
			j--;
		}
	}
	cout << ans;
	return 0;
}