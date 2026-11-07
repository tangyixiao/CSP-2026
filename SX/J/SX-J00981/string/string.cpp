#include <bits/stdc++.h>
using namespace std;
string c;
const int N = 2e5+10;
int a[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, s = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		s = s + a[i];
	}
	if (n == 1) {
		cout << 0;
	}
	return 0;
}
