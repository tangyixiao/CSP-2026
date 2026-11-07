#include <bits/stdc++.h>
using namespace std;
string s;
long long cnt, num, n;

int main() {
	string a = "";
	int c = 0;
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> c >> a;
		num += c;
		for (int j = 0; j < c; j++) {
			s += a ;
		}
	}
	for (int i = 0; i < num; i++) {
		for (int j = num - i; j > 1; j--) {
			if (i == j) {
				break;
			}
			if (s[i] != s[j]) {
				s[j] = s[i];
				cnt++;
				break;
			}
		}
	}
	cout << cnt;
	return 0;
}
