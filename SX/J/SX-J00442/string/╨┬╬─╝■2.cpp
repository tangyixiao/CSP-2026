#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, sum = 0;
	long long h = 0;
	cin >> n;
	int a[n + 1];
	char c[n + 1];
	string s = "";
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		for (int j = 1; j <= a[i]; j++)
			s += c[i];
		sum += a[i];
	}
	long long j = 0;
	while (j <= sum / 2 - 1) {
		if (s[j] != s[sum - j - 1])
			h++;
		j++;
	}
	cout << h;
	return 0;
}
