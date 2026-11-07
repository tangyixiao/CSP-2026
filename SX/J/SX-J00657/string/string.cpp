#include <bits/stdc++.h>
using namespace std;
long long a;
int n;
string S, s, s1;
char z;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		cin >> a >> z;
		s += z;
		long long ls = s.size();
		while (ls != a) {
			ls = s.size();
			if (ls * 2 <= a) {
				s += s;
			} else if (ls * 2 > a) {
				long long t = a - ls;
				long long tt = ls * 2 - a;
				if (t > tt) {
					s += s;
					s.erase(a, tt);
				} else {
					for (int j = 0; j < t; j++) {
						s += z;
					}
				}
			}
		}
		S += s;
		s = "";
		ls = 0;
	}
	long long lS = S.size();
	long long cnt = 0;
	for (int i = 0; i < lS / 2; i++) {
		if (S[i] != S[lS - i - 1]) {
			cnt++;
			S[lS - i - 1] = S[i];
		}
	}
	printf("%lld", cnt);
	return 0;
}
