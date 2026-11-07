#include <bits/stdc++.h>
using namespace std;
long long  len;
string  b, c, d;
int a[100000];

int main() {
	freopen("travel", "r", stdin);
	freopen("travel", "w", stdout);
	long long n, v;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n);
	long long b = 0;
	b = a[0];
	for (int i = 1; i <= n; i++) {
		b = b % a[i];
	}
	cout << b;

	return 0;
}
