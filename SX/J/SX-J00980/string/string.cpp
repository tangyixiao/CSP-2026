#include <bits/stdc++.h>
using namespace std;
string s, m;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, a, r, sum = 0;
	cin >> n;
	while (n--) {
		cin >> a >> m;
		for (int i = 1; i <= a; i++) {
			s = s + m;
		}
	}
	r = s.size() - 1;
	for (int i = 0; i <= (s.size() - 1) / 2; i++) {
		if (s[i] != s[r])
			sum++;
		r--;
	}
	cout << sum;
	return 0;
}
//string
//O-o认真的这第二题？