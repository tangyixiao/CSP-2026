#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
string s;
long long n, a[N], sum, sum2, sum3;
char c[N], q[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;

	long long temp = 1;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		sum += a[i];
		for (int j = temp; j < temp + a[i]; j++) {
			q[j] = c[i];
		}
		temp += a[i];
	}
	for (int i = 1; i <= n; i++) {
		if (c[i] == c[i + 1]) {
			sum2++;
		}
	}
	if (sum2 == n - 1) {
		cout << 0;
		return 0;
	}
	for (int i = 1; i <= sum / 2; i++) {
		if (q[i] != q[sum - i + 1]) {
			sum3++;
		}
	}
	cout << sum3;
	return 0;
}