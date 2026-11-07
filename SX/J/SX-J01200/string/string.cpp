#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	int n;
	cin >> n;
	string s;
	for (int i = 1; i <= n; i++) {
		int b;
		char a;
		cin >> b >> a;
		while (b) {
			s += a;
			b--;
		}
	}
	cout << s;
	return 0;
}
//Trick||Treat!