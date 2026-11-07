#include <bits/stdc++.h>
using namespace std;
int n;
string s[100005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	int sum = 0;
	int x;
	char y;
	for (int i = 1; i <= n; i++) {
		cin >> x >> y;
		for (int j = 1; j <= x; j++) {
			s[++sum] = y;
		}
	}
	int cnt = 0;
	for (int i = 1, j = sum; i <= j; i++, j--) {
		if (s[i] != s[j]) {
			cnt++;
			s[j] = s[i];
		}
	}
	cout << cnt;
	return 0;
}
