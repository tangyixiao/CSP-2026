#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, a[200005], ans;
char b[200005];
string x = "";

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
		for (int j = 1; j <= a[i]; j++)
			x += b[i];
	}
	if (x.size() % 2 == 1) {
		for (int i = 0; i < floor(x.size() / 2); i++) {
			if (x[i] != x[n - i])
				ans++;
		}
	} else {
		for (int i = 0; i < x.size() / 2; i++) {
			if (x[i] != x[n - i])
				ans++;
		}
	}
	cout << ans;
	return 0;
}
