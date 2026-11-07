#include <bits/stdc++.h>
using namespace std;
int n, a[2000005];
char b[2000005];
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	int cnt = -1, sumxx = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
		cnt++;
		for (int j = cnt; j <= cnt + a[i] - 1; j++) {
			s += b[i];
		}
		cnt = cnt + a[i] - 1;
		sumxx += a[i];
	}
	int len = sumxx;
	int start = 0, endx = len - 1, sum = 0;
	while (start < endx) {
		if (s[start] != s[endx]) {
			sum++;
			start++;
			endx--;
			continue;

		} else {
			start++;
			endx--;
		}
	}
	cout << sum;
	return 0;
}