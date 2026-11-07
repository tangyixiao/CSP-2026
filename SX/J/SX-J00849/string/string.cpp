#include <bits/stdc++.h>
using namespace std;
int n, a, len, counts2, counts3;
string s1, s2, s3;
char b;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		for (int j = 0; j < a; j++) {
			s1 += b;
		}
		len += a;
	}
	if (len / 2 == 0) {
		for (int i = 0; i < len / 2; i++) {
			s2 += s1[i];
		}
		for (int i = len / 2 - 1 ; i >= 0; i--) {
			s2 += s1[i];
		}
		for (int i = len - 1; i >= len / 2; i--) {
			s3 += s1[i];
		}
		for (int i = len / 2 ; i < len; i++) {
			s3 += s1[i];
		}
	} else if (len / 2 != 0) {
		for (int i = 0; i <= len / 2; i++) {
			s2 += s1[i];
		}
		for (int i = len / 2 - 1 ; i >= 0; i--) {
			s2 += s1[i];
		}
		for (int i = len - 1; i >= len / 2; i--) {
			s3 += s1[i];
		}
		for (int i = len / 2 ; i < len; i++) {
			s3 += s1[i];
		}
	}
	for (int i = 0; i < len; i++) {
		if (s1[i] != s2[i]) {
			counts2++;
		}
	}
	for (int i = 0; i < len; i++) {
		if (s1[i] != s3[i]) {
			counts3++;
		}
	}

	cout <<  min(counts2, counts3);
	return 0;
}