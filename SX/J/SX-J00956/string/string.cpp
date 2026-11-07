#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
long long n, o, j = 1, l, r, s, s1;
char x, a[N];

int main() {
	freopen("strng.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	while (n--) {
		cin >> o;
		cin >> x;
		while (o--) {
			a[j] = x;
			j++;
		}
	}
	l = 1;
	r = j - 1;
	while (l <= r) {
		if (a[l] != a[r]) {
			a[l] = a[r];
			s++;
		}
		l++;
		r--;
	}
	cout << s;
	return 0;
}
