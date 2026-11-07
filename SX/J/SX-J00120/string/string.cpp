#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
string s[N];
unsigned long long a[N], ssize[N];
unsigned long long n, sum = 0, l = 1, r, cnt = 0;

int main() {
	//freopen("string.in", "r", stdin);
	//freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	r = n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> s[i];
		sum += a[i];
		ssize[i] = a[i];
	}
	if (n % 2 == 1) {
		ssize[n / 2 + 1] = 0;
	}
	while (l < r) {
		if (n % 2 == 1 && l == n / 2 + 1)
			break;
		if (n % 2 == 1 && r == n / 2 + 1)
			break;
		if (s[r][0] != s[l][0]) {
			if (ssize[r] < ssize[l]) {
				cnt += ssize[r];
				ssize[l] -= ssize[r];
				r--;
			} else if (ssize[r] == ssize[l]) {
				cnt += ssize[r];
				r--;
				l++;
			} else {
				cnt += ssize[l];
				ssize[r] -= ssize[l];
			}
		} else {
			if (ssize[r] < ssize[l]) {
				ssize[l] -= ssize[r];
				r--;
			} else if (ssize[r] == ssize[l]) {
				r--;
				l++;
			} else {
				ssize[r] -= ssize[l];
			}
		}
	}
	if (ssize[l] != 0 && s[l][0] != s[r][0] && r > l) {
		if (r == n / 2 + 1) {
			cnt += ssize[l];
		} else {
			cnt += ssize[r];
		}
	}
	cout << cnt;
	return 0;
}
