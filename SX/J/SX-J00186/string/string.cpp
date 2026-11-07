#include <bits/stdc++.h>
using namespace std;
int n, ans, b[200005];

struct stu {
	int a;
	char b;
} a[200005];
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].a >> a[i].b;
		for (int j = 1; j <= a[i].a; j++) {
			s += a[i].b;
		}
	}
	long long nt = s.size();
	for (int i = 0; i < n / 2 + 1; i++) {
		if (s[i] != s[n - i]) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}
