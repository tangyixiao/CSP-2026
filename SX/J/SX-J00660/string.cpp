#include <bits/stdc++.h>
using namespace std;
int n, x, sum, ans;
char c;

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	vector<int> a(n + 2);
	for (int i = 1; i <= n; i++) {
		cin >> x >> c;
		int c2 = int(c);
		a[sum] += c2;
		a[sum + x] -= c2;
		sum += x;
	}
	for (int i = 0; i < sum; i++) {
		if (i != 0)
			a[i] += a[i - 1];
		else
			continue;
	}
	for (int i = 0; i <= sum / 2; i++)
		if (a[i] != a[sum - i])
			ans++;
	cout << ans;
	return 0;
}
