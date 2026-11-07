#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
char s[N], z[N];
int n, a;
char b;
int ct;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> b;
		for (int j = a; j >= 1; j++) {
			z[i] = b;
		}
		for (int j = 1; j <= a; j++) {
			s[i] = b;
			if (s[i] != z[i]) {
				ct++;
			} else {
				ct += 0;
			}
		}
	}
	cout << ct;
	return 0;
}