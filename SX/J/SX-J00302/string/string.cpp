#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, d, t = 0, cnt = 0;
	string s;
	char a;
	cin >> n;
	while (n--) {
		cin >> d >> a;
		for (int i = 1 + cnt; i <= d + cnt; i++) {
			s[i] = a;
		}
		cnt += d;
	}
	int ls =  cnt;
	for (int i = 1; i <= ls / 2 ; i++) {
		if (s[i] != s[ls - i + 1])
			t++;
	}
	cout << t;
	return 0;
}
