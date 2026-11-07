#include <bits/stdc++.h>
#include <algorithm>
#define int long long
using namespace std;

const int MaxN = 2e5+5;

struct S {
	char str;
	int cnt;
} s[MaxN];

string str;

int n, ans, sum;

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> s[i].cnt >> s[i].str;
		for (int j = 1; j <= s[i].cnt; j++) str.push_back(s[i].str);
	}
	str = " " + str;
	int len = str.size() - 1;
	int l = 1, r = len;
	while (l < r) {
		if (str[l] != str[r]) ans++;
		l++, r--;
	}
	cout << ans;
}
