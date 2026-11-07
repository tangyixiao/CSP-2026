#include <bits/stdc++.h>
using namespace std;
string s, b;
long long n, a, cnt = 0, sum = 0;
int f = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	while (n--) {
		cin >> a >> b;
		cnt += a;
		for (int i = 1; i <= a; i++) {
			s += b;
		}
	}
	int len = s.size();
	for (int i = 0; i < len; i++) {
		if (s[i] != s[len - i - 1]) {
			f = 1;
		}
	}
	if (f == 0) {
		cout << 0;
	} else {
		int mid = len / 2;
		for (int i = 0; i < mid; i++) {
			for (int j = mid; j < len; j++) {
				if (s[i] != s[j]) {
					s[j] = s[i];
					sum++;
				}
			}
		}
	}
	cout << sum;
	return 0;
}
