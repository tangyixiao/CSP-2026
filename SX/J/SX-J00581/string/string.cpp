#include <bits/stdc++.h>
using namespace std;
int n;
int a;
char c;
string s;
string b;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		cin >> a;
		cin >> c;
		for (int j = cnt; j < cnt + a; j++) {
			s[j] = c;

		}
		cnt += a;
		b[i] = c;
	}
	for (int i = 0; i < n; i++) {
		if (b[i] == b[i + 1]) {
			cout << 0;
			return 0;
		}
	}

	//for (int i = 0; i < cnt; i++)
	//	cout << s[i];
	return 0;
}