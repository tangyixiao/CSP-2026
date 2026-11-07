#include <bits/stdc++.h>
using namespace std;
char a[100000005];
long long sl[100005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	long long l = 0, step = 0;
	cin >> n;

	for (int i = 1; i <= n; ++i) {

		char x;
		cin >> sl[i] >> x;
		for (int j = l + 1 ; j <= l + sl[i]; ++j) {
			a[j] = x;
		}
		l += sl[i];
	}
	for (int i = 1; i <= l / 2; ++i) {
		if (a[i] != a[(l + 1) - i]) {
			step++;
		}
	}
	cout << step << endl;
	return 0;
}
