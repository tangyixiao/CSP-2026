#include <bits/stdc++.h>
using namespace std;
long long  n, l[1000007], b = 0, s = 0;
char  z[1000007];
string a;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> l[i] >> z[i];
		for (long long j = 1; j <= l[i]; j++) {
			a[j + b] = z[i];
		}
		b = b + l[i];
	}
	for (long long  i = 1; i < (b + 1) / 2; i++) {
		if (a[i] != a[b - i + 1]) {
			s = s + 1;
		}
	}
	cout << s;
}
