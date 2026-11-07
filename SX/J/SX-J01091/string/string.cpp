#include <bits/stdc++.h>
using namespace std;
int n, cnt;
long long a;
char c;
string s;

int main() {
//	freopen("string.in", "r", stdin);
//	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> c;
		for (int j = 1; j <= a; j++) {
			s += c;
		}
	}
	for (int i = 0; i < s.length() / 2; i++) {
		if (s[i] != s[s.length() - i - 1]) {
			cnt++;
		}
	}
	cout << cnt;
//	fclose(stdin);
//	fclose(stdout);
	return 0;
}
