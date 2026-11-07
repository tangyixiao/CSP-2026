#include <bits/stdc++.h>
long long x, x1;
char c;
const int N = 2e5;
long long a[N];
using namespace std;
int n, ct;

int main() {
	freopen("string.in", "r", "stdin");
	freopen("string.out", "w", "stdout");
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x >> c;
		x1 += x;
		a[i] = c;
	}
	for (long long i = 1; i < x1; i++) {
		if (a[i + 1] != a[i])
			ct++;
	}
	ct--;
	cout << ct;
	return 0;
}