#include <bits/stdc++.h>
using namespace std;
int a[200005];
char c[100005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	string s = "";
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		for (int j = 0; j < a[i]; j++) {
			s += c[i];
		}
	}
	long long cnt = 0;
	int len = s.size();
	for (int i = 0; i < len; i++) {

		if (s[i] < len / 2 - 1 && s[i] != s[len / 2 - 1 + i]) {
			cnt++;
		}
	}

	cout << cnt;
	return 0;
}