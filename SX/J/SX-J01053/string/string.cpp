#include <bits/stdc++.h>
using namespace std;
int a[10000];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	string s, q, b; //q=最终
	if (n <= 1) {
		cout << 0;
	}
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cin >> b[i];
	}
	if (n == 2) {
		if (b[0] == b[1]) {
			cout << 0;
		} else {
			cout << 1;
		}
	}
	int x = 0;
	for (int i = 0; i < a[i]; i++) {
		for (int j = 0; j < a[i]; j++) {
			cout << b[i];
			s[j + x] = b[i];
			if (j + 1 < a[i]) {
				int x = j + 1;
			}
		}

	}//拼接
	cout << s;
	int len = s.size();
	for (int i = len - 1; i >= 0; i--) {
		q[i] = s[len - i];
	}//反转
	bool c = true;
	for (int i = 0; i < len; i++) {
		if (s[i] != q[i]) {
			c = false;
		}
	}
	if (c == true) {
		cout << 0;
	}

	fclose(stdin);
	fclose(stdout);
	return 0;
}