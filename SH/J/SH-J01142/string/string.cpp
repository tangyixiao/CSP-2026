#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	scanf("%d", &n);
	string s = "";
	for (int i = 1; i <= n; i++) {
		int a; char c;
		scanf("%d %c", &a, &c);
		for (int j = 1; j <= a; j++) s += c;
	}
	
	int sz = s.size();
	int ans = 0;
	for (int i = 0; i < sz; i++) {
		if (s[i] != s[sz - i - 1]) ans++;
	}
	cout << ans;
	return 0;
}
