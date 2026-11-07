#include <bits/stdc++.h>
using namespace std;
int d[10000007];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int m;
	string s, s1, s2;
	scanf("%d", &m);
	int  n;
	while (m--) {
		char c;
		cin >> n >> c;
		s += c;
	}
	int len = s.size();
	long long sum = 0;

	s1 = s;
	reverse(s.begin(), s.end());
	s2 = s;
	int l = len / 2;
	int ans1 = 0, ans2 = 0;
	for (int i = 0; i < len; i++) {
		if (s1[i] != s2[i])
			ans1++;
	}

	if (s1.size() % 2 != 0) {
		len += 1;
	}
	for (int i = len; i < l + 100; i++) {
		if (s1[i] != s2[i])
			ans2++;
	}
	int ans = min(ans1, ans2);
	cout << ans;
	return 0;
}
