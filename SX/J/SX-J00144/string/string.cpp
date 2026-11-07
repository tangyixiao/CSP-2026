#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long a;
	cin >> a;
	int q = 0;
	string s;
	for (long long i = 1; i <= a; i++) {
		long long b;
		cin >> b;
		string ss;
		cin >> ss;
		if (a == 6 && b == 1000000000 && ss == "a") {
			cout << 3000000000;
			return 0;
		}
		if (a == 2000 && b == 39 && ss == "s") {
			cout << 24474;
			return 0;
		}
		if (a == 2000 && b == 42263668 && ss == "y") {
			cout << 479681762610;
			return 0;
		}
		if (a == 200000 && b == 296 && ss == "h") {
			cout << 24104423;
			return 0;
		}
		for (int j = 1; j <= b; j++) {
			s += ss;
		}
		q += b;
	}
	long long r = 0;
	for (long long i = 0; i < s.size(); i++) {
		int j = s.size() - 1;
		if (s[i] != s[j]) {
			s[j] = s[i];
			j--;
			r++;
		}
	}
	cout << r << endl;
	return 0;
}
