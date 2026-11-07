#include <bits/stdc++.h>
using namespace std;
int a, num;
string S, c;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> c;
	}
	if (c[n] == c[0]) {
		cout << "0";
	} else {
		cout << a - 1;
	}
	return 0;
}
