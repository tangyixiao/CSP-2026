#include <bits/stdc++.h>
using namespace std;
string l;
int n, a, b;
char c;
int s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		cin >> c;
		for (int j = 0; j < a; j++) {
			l[b] = c;
			b++;
		}
	}
	b--;
	if (n % 2 == 0) {
		for (int i = 0, j = b; i < (b + 1) / 2; i++, j--) {
			if (l[i] != l[j]) {
				s++;
			}
		}
	} else {
		for (int i = 0, j = b; i < (b + 1) / 2 + 1; i++, j--) {
			if (l[i] != l[j]) {
				s++;
			}
		}
	}
	cout << s;
	return 0;
}