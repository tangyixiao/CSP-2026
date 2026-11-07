#include <bits/stdc++.h>
using namespace std;
long long n, a[200005], sum, num, s, t, cnt1, cnt2;
char c[200005];

struct node {
	long long w;
	char cc;
} qian[200005], hou[200005];

int main() {

	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	cin >> n;
	for (long long i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		num += a[i];
	}
	s = num / 2;
	if (num % 2 == 1)
		t = (num + 1) / 2 + 1;
	else
		t = num / 2 + 1;
	num = 0;
	for (long long i = 1; i <= n; i++) {
		if (num + a[i] <= s) {
			qian[++cnt1] = {a[i], c[i]};
		} else if (num >= t) {
			hou[++cnt2] = {a[i], c[i]};
		} else if (num == s && a[i] == 1 && t - s == 2) {
			continue;
		} else {
			if (num < s)
				qian[++cnt1] = {s - num, c[i]};
			if (num + a[i] >= t)
				hou[++cnt2] = {num + a[i] - t + 1, c[i]};
		}
		num += a[i];
	}
	int l = 1, r = cnt2;
	while (l <= cnt1 && r >= 1) {
		if (qian[l].cc == hou[r].cc) {
			if (qian[l].w > hou[r].w) {
				qian[l].w -= hou[r].w;
				r--;
			} else if (qian[l].w < hou[r].w) {
				hou[r].w -= qian[l].w;
				l++;
			} else {
				r--;
				l++;
			}
		} else {
			if (qian[l].w > hou[r].w) {
				sum += hou[r].w;
				qian[l].w -= hou[r].w;
				r--;
			} else if (qian[l].w < hou[r].w) {
				sum += qian[l].w;
				hou[r].w -= qian[l].w;
				l++;
			} else {
				sum += qian[l].w;
				r--;
				l++;
			}
		}
	}
	cout << sum;


	return 0;
}