#include <bits/stdc++.h>
using namespace std;
long long n, a[200005], ans;
char c[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i] >> c[i];
	int i = 1, j = n, sumi = a[1], sumj = a[j];
	while (i <= j) {
		if (c[i] != c[j])
			ans += min(sumi, sumj);
		if (sumi >= sumj) {
			sumi -= sumj;
			sumj = 0;
		} else {
			sumj -= sumi;
			sumi = 0;
		}
		if (sumi == 0) {
			i++;
			sumi = a[i];
		}
		if (sumj == 0) {
			j--;
			sumj = a[j];
		}
	}
	cout << ans;
	return 0;
}
