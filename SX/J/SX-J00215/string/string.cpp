#include <bits/stdc++.h>
using namespace std;

struct node {
	int len;
	char s;
} a[200005];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].len >> a[i].s; 		// 长度与字符的输入
	}
	int l = 1, r = n, x;
	long long ans = 0;					// 答案初始化
	while (l <= r) {
		x = abs(a[l].len - a[r].len);	// 记录长度差
		if (a[l].s != a[r].s) {		 	//字符不同时
			if (a[l].len >= a[r].len) {	//短的顺从长的
				ans += a[r].len;
				r--;
				a[l].len = x;
			} else {
				ans += a[l].len;
				l++;
				a[r].len = x;
			}
		} else {						//字符相同时
			if (a[l].len >= a[r].len) { //比较长短
				r--;
				a[l].len = x;			//抵消后，更新长度
			} else {
				l++;
				a[r].len = x;
			}

		}
	}
	cout << ans;
	return 0;

}
