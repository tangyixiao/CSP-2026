#include <bits/stdc++.h>
using namespace std;

long long n, a, cnt;
char s;
string ss;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> s;
		for (int j = 1; j <= a; j++)
			ss += s;
	}
	for (int i = 1; i <=  ss.size() / 2 + 1; i++) {
		if (ss[i] != ss[n - i + 1]) {
			cnt += 1;
		}
	}
	cout << cnt;
	return 0;
}
