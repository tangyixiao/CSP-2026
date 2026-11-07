#include <bits/stdc++.h>
using namespace std;
long long n;

int main() {

	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	char a[n + 5];
	long long b[n + 5];
	for (int i = 1; i <= n; i++) {
		cin >> b[i] >> a[i];
	}
	string p;


	if (b[1] == b[n] and a[1] == a[n])
		cout << 0;

	else
		cout << a[1];

	return 0;
}
