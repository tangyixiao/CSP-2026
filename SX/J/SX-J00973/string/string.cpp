#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10, NB = 1e7+10;
long long n, s1 = 1, sum = 0;

struct aaa {
	long long a;
	char b;
} d[N];
char s[NB];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> d[i].a >> d[i].b;
		d[i].a = d[i].a + d[i - 1].a;
	}
	s[0] = '0';
	for (int i = 1; i <= d[n].a; i++) {
		if (i == d[s1].a + 1) {
			s1++;
		}
		s[i] = d[s1].b;
	}

	for (int i = 1; i <= d[n].a / 2 ; i++) {
		if (s[i] != s[d[n].a + 1 - i]) {
			sum++;
		}
	}
	cout << sum;
	return 0;
}
