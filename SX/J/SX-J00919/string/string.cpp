#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	string s = "";
	long long n;
//	cin.tie(0);
//	cout.tie(0);
	cin >> n;
	long long a;
	char ch;
	long long sum = 0;
	for (long long i = 1; i <= n; i++) {
		cin >> a >> ch;
		sum += a;
		for (long long j = 1; j <= a; j++) {
			s += ch;
		}
	}
	long long t = 0;
	long long cnt = sum / 2;
	for (long long i = 0; i < cnt; i++) {
		if (s[i] != s[sum - i - 1]) {
			t++;
		}
	}
	cout << t;
	return 0;
}
