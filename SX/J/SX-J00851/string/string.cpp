#include <bits/stdc++.h>
using namespace std;
int n;
long long a[100005];
char c[100005];
char target = 'a', found = 'a';
int needt = 0, fc = 0;
long long ans = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	if (n == 1) {
		cout << 0;
		return 0;
	}
	for (int i = 1; i <= n; i++)
		cin >> a[i] >> c[i];
	int l = 1, r = n;
	target = c[1];
	needt = a[1];
	found = c[n];
	fc = a[n];
	while (r - l >= 1) {
		if (needt > 0) {
			int minn = min(fc, needt);
			if (c[l] != c[r])
				ans += minn;
			fc -= minn;
			needt -= minn;
			if (fc == 0) {
				r--;
				fc = a[r];
			}
			if (needt == 0) {
				l++;
				needt = a[l];
			}
		} else {
			ans += int(double(fc + needt) / 2.0 - 0.5);
		}
	}
	cout << ans;
	return 0;
}
