#include<bits/stdc++.h>
#define ll long long
using namespace std;
set<int> aa;
set<char> sa;
struct str {
	int x;
	char a;
};
str s[200005];
int main () {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> s[i].x >> s[i].a;
		aa.insert(s[i].x);
		sa.insert(s[i].a);
	}
	bool f = 1;
	for (int i = 1; i <= (n - i + 1); i++) {
		if (s[i].x != s[n - i + 1].x) {
			f = 0;
			break;
		}
	}
	if (sa.size() == 1) {
		cout << 0;
		return 0;
	}
	if (aa.size() == 1 || f == 1) {
		ll sum = 0;
		for (int i = 1; i <= (n - i + 1); i++) {
			if (s[i].a != s[n - i + 1].a) sum += s[i].x;
		}
		cout << sum;
		return 0;
	}
	string ss;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= s[i].x; j++) {
			ss += s[i].a;
		}
	}
	ll sum = 0;
	ll nn = ss.size();
	for (int i = 0; i <= nn - i - 1; i++) {
		if (ss[i] != ss[nn - i - 1]) sum++;
	}
	cout << sum;
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b

*/