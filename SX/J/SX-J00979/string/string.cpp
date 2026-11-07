#include <bits/stdc++.h>
using namespace std;
long long n, a[2050000];
char c[2050000];
string b;
int e = 0, f = 0;
int sum = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		e = e + a[i];
		if (i == 1) {
			a[i - 1] = 0;
		}
		f = f + a[i - 1];
		for (int j = f; j < f + a[i]; j++) {
			b[j] = c[i];
		}
	}
	for (int i = 0; i < e; i++) {
		//cout<<b[i];
		if (b[i] != b[e - i] ) {
			sum++;
		}
	}
	cout << sum - 1;
	return 0;
}
