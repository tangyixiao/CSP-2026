#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	int S = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int a;
		char b;
		cin >> a >> b;
		while (a == 0) {
			S += b;
			a--;
		}
	}
	return 0;
}