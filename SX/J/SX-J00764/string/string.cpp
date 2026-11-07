#include <bits/stdc++.h>
using namespace std;
//注意ai<=1e9,不可以真的变成字符串
long long a[201000];
char c[201000];
long long n, ans;
long long sum = 0;

//时间复杂度：O(n)<=2e5 100pts
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	char inp[3];
	for (int i = 1; i <= n; i++) {
		scanf("%lld%s", &a[i], &inp);
		c[i] = inp[0];
		sum += a[i];
//		cout << c[i] << endl;
	}
	long long nowsum = 0;
	if (sum % 2 == 1) {
		for (int i = 1; i <= n; i++) {
			nowsum += a[i];
			if (nowsum > sum / 2) {
				a[i]--;
				break;
			}
		}
	}
	int l = 1, r = n, mn;
	while (l < r) {
		mn = min(a[l], a[r]);
		if (a[l] == 0) {
			l++;
			continue;
		}
		if (a[r] == 0) {
			r--;
			continue;
		}
		if (c[l] != c[r]) {
			ans += mn;
			if (a[l] > a[r]) {
				a[l] -= mn;
				r--;
			} else if (a[l] < a[r]) {
				a[r] -= mn;
				l++;
			} else {
				l++;
				r--;
			}
		} else {
			if (a[l] > a[r]) {
				a[l] -= mn;
				r--;
			} else if (a[l] < a[r]) {
				a[r] -= mn;
				l++;
			} else {
				l++;
				r--;
			}
		}
	}
	cout << ans;
	return 0;
}