#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
int a[N];
char c[1010];
long long n;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n ; i++) {
		cin >> a[i] >> c[i];
	}
	if (n == 1) {
		cout << 0;
	}
	if (n == 2 && c[1] == c[2]) {
		cout << 0;
	} else {
		if (a[1] >= a[2]) {
			cout << a[2];
		} else {
			cout << a[1];
		}
	}
	return 0;
}
