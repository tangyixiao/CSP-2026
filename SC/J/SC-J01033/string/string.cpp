#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5 + 5;
int n, l, r;
int a[N];
char c[N];
ll ans = 0;
int main () {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
//	freopen("down/string/string6.in", "r", stdin);
//	freopen("down/string/string6.out", "w", stdout);
	ios :: sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i] >> c[i];
	}
	l = 1, r = n;
	while (l < r) {
		if (c[l] == c[r]) {
			if (a[l] == a[r]) {
				++l;
				--r;
				continue;
			}
			else {
				if (a[l] > a[r]) {
					a[l] -= a[r];
					--r;
				}
				else {
					a[r] -= a[l];
					++l;
				}
			}
		}
		else {
			if (a[l] == a[r]) {
				ans += a[l];
				++l;
				--r;
				continue;
			}
			else {
				if (a[l] > a[r]) {
					ans += a[r];
					a[l] -= a[r];
					--r;
				}
				else {
					ans += a[l];
					a[r] -= a[l];
					++l;
				}
			}
		}
	}
	cout << ans << '\n';
	return 0;
}