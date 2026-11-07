#include <bits/stdc++.h>
using namespace std;
const int N = 200005;
int a[N];
char c[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	if (c[1] == c[n])
		cout << 0 << endl;
	else
		cout << a[n] << endl;
	return 0;
}