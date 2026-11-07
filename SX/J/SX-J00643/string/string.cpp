#include <bits/stdc++.h>
using namespace std;

int a[100];
string b[100];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
		cnt += a[i];
		if (b[i] == b[i + 1]) {
			cout << 0;
			return 0;
		}
	}
	cout << floor(cnt / 2);
	return 0;
}