#include <bits/stdc++.h>
using namespace std;
long long num[200005];
char ch[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> num[i] >> ch[i];
	}
	long long ans = 0;
	int r = n, l = 1;
	while (l <= n && r >= 1 && l < r) {
		if (ch[l] == ch[r]) {
			if (num[l] == num[r]) {
				l++;
				r--;
			} else if (num[l] > num[r]) {
				num[l] -= num[r];
				r--;
			} else {
				num[r] -= num[l];
				l++;
			}
		} else {
			if (num[l] == num[r]) {
				ans = ans + num[l];
				l++;
				r--;
			} else if (num[l] > num[r]) {
				ans = ans + num[r];
				num[l] -= num[r];
				r--;
			} else {
				ans = ans + num[l];
				num[r] -= num[l];
				l++;
			}
		}
	}
	cout << ans ;
	return 0;
}
