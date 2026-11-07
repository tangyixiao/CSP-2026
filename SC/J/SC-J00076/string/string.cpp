#include<bits/stdc++.h>
using namespace std;
int n;
int a[200010];
long long sum;
long long pre[200010];
char ch[200010];
int main () {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> ch[i];
		sum += a[i];
		pre[i] = sum;
	}
	long long k = sum / 2;
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (pre[i - 1] <= k and pre[i] >= k) {
			cnt = i;
			break;
		}
	}
	int l = 0, r = sum % 2;

	while (true) {
		int z1 = lower_bound(pre + 1, pre + 1 + n, k - l) - pre;
		int z2 = upper_bound(pre + 1, pre + 1 + n, k + r) - pre;
		if (ch[z1] == ch[z2]) {
			l = k - pre[z1 - 1];
			r = pre[z2] - k - 1;
//			cout << z1 << z2;
		} else {
			break;
		}
		if (z2 == n || z1 == 1) break;
	}
	long long delta = sum - l - r;
//	cout << l << ' ' << r;
	delta /= 2;
	cout << delta;
	return 0;
}