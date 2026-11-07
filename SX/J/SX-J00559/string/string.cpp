#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
long long n;

struct node {
	int b;
	char c;
} a[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	string s = "";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].b >> a[i].c;
		for (int j = 1; j <= a[i].b; j++) {
			s += a[i].c;
		}
	}
	//cout << s << "\n";
	long long l = 0, r = s.size() - 1, ans = 0;
	while (l < r) {
		if (s[l] != s[r])
			ans++;
		l++, r--;
	}
	cout << ans;
	return 0;
}