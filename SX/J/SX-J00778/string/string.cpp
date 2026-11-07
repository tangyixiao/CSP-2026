#include <bits/stdc++.h>
using namespace std;

long long ans = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	int num = 0;
	cin >> n;
	string s = "";
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		char b;
		cin >> b;
		for (int j = 0; j < a; j++) {
			s[num] = b;
			num++;
		}

	}
	for (int i = 0; i <= ((n + 1) / 2 ); i++) {
		if (s[i] != s[n - i - 1])
			ans++;
	}
	cout << ans;
	return 0;
}
