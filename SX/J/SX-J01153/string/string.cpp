#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n = 0;
	char a[1000000] = {0};
	int a_n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int c;
		char b;
		cin >> c >> b;
		for (int j = 0; j < c; j++) {
			a[a_n++] = c;
		}
	}
	int ret = 0, i = 0;
	while (i < (a_n / 2)) {
		ret += (a[i] != a[a_n - i - 1]);
		i++;
	}
	cout << ret;
	return 0;
}
