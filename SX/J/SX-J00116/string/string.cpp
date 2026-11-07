#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	char s[100000000];
	int cntn = -1;
	for (int i = 0; i < n; i++) {
		int a;
		char c;
		cin >> a >> c;
		cntn += a;
		for (int j = 0; j < a; j++) {
			s[cntn] = c;
		}
	}
	int cntf = 0;
	for (int i = 0; i <= cntn; i++) {
		cntf += (s[cntn - i] != s[i]);
	}
	cout << cntf / 2;
	return 0;
}
