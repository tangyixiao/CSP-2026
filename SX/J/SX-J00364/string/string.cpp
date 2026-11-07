#include <bits/stdc++.h>
using namespace std;
long long a[200005];
string s[100000005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, num = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		char b;
		cin >> a[i] >> b;
		num += a[i];
		for (int j = 1; j <= a[i]; j++) {
			s[j] = b;
		}
	}
	int cnt = 0;
	for (int i = 1; i <= num / 2; i++) {
		if (s[i] != s[num - i])
			cnt++;
	}
	cout << cnt;
	return 0;
}