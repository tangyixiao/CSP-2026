#include <bits/stdc++.h>
using namespace std;
const long long N = 2e5 + 5;
long long n, ans, l = 1, r, s[N];
pair<long long, char> a[N];
int main() {
//	freopen("string6.in", "r", stdin);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (long long i = 1; i <= n; i++) {
		cin >> a[i].first >> a[i].second, r += a[i].first;
		s[i] = s[i - 1] + a[i].first;
//		cout << a[i].first << " " << a[i].second << "\n";
	}
//	cout << "111\n";
	while (l < r) {
		long long i = lower_bound(s + 1, s + 1 + n, l) - s;
		long long j = lower_bound(s + 1, s + 1 + n, r) - s;
		long long len1 = s[i] - l + 1, len2 = a[j].first - s[j] + r;
//		cout << l << " " << r << " " << i << " " << j << " " << len1 << " " << len2 << "\n";
		if (a[i].second != a[j].second)
			ans += min(len1, len2);
		l += min(len1, len2), r -= min(len1, len2);
	}
	cout << ans;
	return 0; 
}
/*
双指针的思想
3
2 a
2 b
1 c

2
2 a
3 a

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b

*/
/*
9:36:45 测完小样例
9:44:41 测完大样例
100pts
*/