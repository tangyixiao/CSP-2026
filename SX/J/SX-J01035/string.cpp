#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
int num[N], pos[N], di;
char s[N], c[N];
long long  n, sum = 0, ans = 0, zong = 0;
long long mid = 0, k = 1, m = 0;
long long z = 0, b = 1;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> num[i] >> s[i];
		sum += num[i];
	}
	mid = sum / 2 ;

	for (int i = 1; i <= n; i++) {
		pos[i] += num[i];
		if (mid <= pos[i])
			di = i;//di是中点所在区间编号
		zong = pos[i - 1];

	}
	for (int i = 1; i <= n; i++) {
		if (di >= 1 && di <= n) {
			if (s[di - k] != s[di + k])
				ans += min(num[di - k], num[di + k]);
			k++;
		}
		if (di == 1) {
			if (s[1] != s[i + 1])
				ans += num[i + 1];
		};
		if (di == n) {
			if (s[n] != s[n - i])
				ans += num[n - i];
		}
	}
	for (int i = 1; i <= n; i++) {
		if (s[i] != s[n - 1])
			z++;
	}
	m = num[di] / 2 ;
	if (m + zong != mid && z != 0)
		ans += abs(m + zong - mid) ;


	for (int i = 1; i <= n; i++) {
		if (s[di] == s[di - b] && s[di] != s[di + b]) {
			b++;
		}
		if (b == n / 2 - 1)
			ans = mid;
	}
	cout << ans;
	return 0;
}
/*6
 1000000000 a
 1000000000 a
 1000000000 a
 1000000000 b
 1000000000 b
 1000000000 b
*/
