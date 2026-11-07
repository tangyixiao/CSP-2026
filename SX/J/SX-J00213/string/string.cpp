#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, ct1;
	char s1;
	cin >> n;
	cin >> ct1 >> s1;
	if (n <= 1) {
		cout << 0;
		return 0;
	}
	int sum = 0;
	int ct;
	char s;
	for (int i = 1; i < n ; i++) {
		cin >> ct >> s;
		if (s == s1) {
			sum += ct;
		}
	}
	cout << sum + ct1;
	return 0;
}