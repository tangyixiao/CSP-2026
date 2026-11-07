
#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.in", "r", stdin);
	int n, ans = 0;
	cin >> n;
	char c[n + 5];
	int a[n + 5];
	string s;
	for (int i = 1; i < n; i ++) {
		cin >> a[i] >> c[i];
		for (int j = 1; j <= a[i]; j ++) {
			s += c[i];
		}
	}
	string res = s;
	s.reserve();
	for (int i = 1; i <= n / 2; i ++) {
		if (s[i] != res[i])
			ans++;
	}
	cout << ans;
	return 0;
}
