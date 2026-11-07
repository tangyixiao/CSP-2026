#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("string.in", "r", stdin);
	//freopen("string.out", "w", stdout);
	int a;
	cin >> a;
	int cnt3 = 0;
	int l[100];
	long long o;
	int cnt1 = 1;
	char c[50];
	char s[100];
	for (int i = 1; i <= a; i++) {
		cin >> l[i] >> c[i];
	}
	for (int i = 1; i <= a; i++) {
		o += l[i];
	}
	for (int i = 1; i <= a; i++) {
		for (int p = cnt1; p <= l[i]; p++) {
			s[p] = c[i];
		}
		cnt1 += l[i];
	}
	int q[100];
	for (int i = 1; i <= o / 2; i++) {
		q[i] = s[i];
	}
	for (int i = 1; i <= o / 2; i++) {
		if (q[i] != s[o - i + 1]) {
			cnt3++;
		}
	}
	cout << cnt3;
	return 0;
}
