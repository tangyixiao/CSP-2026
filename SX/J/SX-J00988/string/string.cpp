#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
int n;
int a[N];
char c[N];
long long num;
long long mid;
long long ans;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		num += a[i];
	}
	mid = num / 2;
	for (int i = 1; i <= n / 2; i++) {
		int r = n - i;
		if (c[i] != c[r]) {
			if (a[i] > a[r]) {
				ans += min(a[i] - a[r], min(a[i], a[r]));
			} else {
				ans += min(a[r] - a[i], min(a[i], a[r]));
			}
		}
	}
	cout << 0;
	return 0;
}
