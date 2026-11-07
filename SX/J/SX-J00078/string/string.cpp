#include <bits/stdc++.h>
using namespace std;
int n, linshibl, i = 1, j;
long long sum = 0;

struct T {
	int a;
	string c;
} s[200100];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int qw = 1; qw <= n; qw++) {
		cin >> s[qw].a >> s[qw].c;
	}
	j = n;
	while (i < j) {
		if (s[i].c != s[j].c) {
			if (s[i].a > s[j].a) {
				sum += s[j].a;
				s[i].a -= s[j].a;
				j--;
			} else if (s[i].a < s[j].a) {
				sum += s[i].a;
				s[j].a -= s[j].a;
				i++;
			} else {
				sum += s[i].a;
				i++;
				j--;
			}
		} else {
			if (s[i].a == s[j].a) {
				i++;
				j--;
			} else if (s[i].a > s[j].a) {
				s[i].a -= s[j].a;
				j--;
			} else {
				s[j].a -= s[i].a;
				i++;
			}
		}
	}
	cout << sum;
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/