#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
string s;
long long n;
long long sum;
long long sss;
long long ss = 0;
long long a[N];
char c[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[ss] >> c[ss];
		for (int j = 1; j <= a[ss]; j++) {
			s = s + c[ss];
		}
		ss++;
	}
	if (n % 2 == 0) {
		sss = s.size() / 2;
	} else {
		sss = s.size() / 2 + 1;
	}
	int jjj = s.size() - 1;
	for (int i = 0; i < sss; i++) {
		if (s[i] != s[jjj]) {
			sum++;
		}
		jjj--;
	}
	cout << sum;
	return 0;
}
