#include <bits/stdc++.h>
using namespace std;
int n, sum = 0;
long long  a[200050];
char b[200050];
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cin >> b[i];
		for (int y = 0; y < a[i]; y++) {
			s += b[i];
		}
	}
	int len = s.size();
	for (int i = 0; i < len / 2; i++) {
		if (s[i] == s[len - 1 - i]) {
		} else {
			sum++;
		}
	}
	cout << sum;
	return 0;
}
