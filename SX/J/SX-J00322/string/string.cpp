#include <bits/stdc++.h>
using namespace std;
int n;
long long b[200005], cnt = 0;
string a[200005], sum;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> b[i] >> a[i];
		for (int j = 1; j <= b[i]; j++) {
			sum += a[i];
		}
	}

	int len = sum.size() - 1;
	int p = 0;
	while (p < len) {
		if (sum[p] != sum[len]) {
			cnt++;
		}
		p++;
		len--;
	}
	cout << cnt;
	return 0;
}