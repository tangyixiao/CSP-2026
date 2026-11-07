#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ans, n, m, sum;
string a;
char s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> m >> s;
		sum += m;
		for (int j = 1; j <= m; j++) {
			a += s;
		}
	}
	for (int i = 0; i < sum / 2; i++) {
		if (a[i] != a[sum - 1 - i])
			ans++;
	}
	cout << ans;
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
