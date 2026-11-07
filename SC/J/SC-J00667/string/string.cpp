#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5+5;
ll n, ans, cnt;
struct node {
	ll l, r;
	char ch;
} a[N];
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	if (n == 1) {
		cout << "0";
		return 0;
	}
	a[0].l = a[0].r = 0;
	for (int i = 1; i <= n; i++) {
		ll ls;
		cin >> ls;
		a[i].l = a[i - 1].r + 1;
		a[i].r = a[i - 1].r + ls;
		cin >> a[i].ch;
	}
	ll i, j, u = 1, v = n;
	for (i = a[u].l, j = a[v].r; i < j; i++, j--) {
		if (i > a[u].r) u++;
		if (j < a[v].l) v--;
		if (a[u].ch != a[v].ch) ans++;
	}
	cout << ans;
	return 0;
}