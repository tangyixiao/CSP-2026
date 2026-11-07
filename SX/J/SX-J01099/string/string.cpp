#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, a;
	string s;

	cin >> n;
	char size[n];

	long long j = 0;
	for (int i = 0; i < n; i++) {
		cin >> a >> size[i];
		if (i != 0) {

			if (size[i] == size[i - 1]) {
				j++;
			}
		}
	}
	if (j == n)
		cout << 0;
	if (n == 1) {
		cout << "0";
		return 0;
	}
	return 0;
}
