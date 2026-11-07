#include <bits/stdc++.h>
using namespace std;
string s1, s2, s3;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int a, cnt = 0;
	cin >> a;
	for (int i = 0; i < a; i++) {
		int x;
		cin >> x >> s1;
		for (int j = 0; j < x; j++)
			s2 = s2 + s1;
		cnt = cnt + x;
	}
	char f = s2[0];
	bool flag = true;
	for (int i = 0; i < cnt; i++) {
		if (s2[i] != f)
			flag = false;
	}
	if (flag == true) {
		cout << "0";
		return 0;
	}
	for (int i = 0; i < cnt; i++) {
		s3[i] = s2[cnt - i - 1];
	}
	if (s1 == s2) {
		cout << "0";
		return 0;
	}
	if (cnt % 2 == 1) {
		cout << (cnt - 1) / 2;
		return 0;
	} else {
		cout << cnt / 2;
		return 0;
	}
	return 0;
}
