#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	string st = "";
	long long  n;
	cin >> n;
	for (long long i = 1; i <= n; i++) {
		long long m;
		char a;
		cin >> m;
		cin >> a;
		for (long long i = 1; i <= m; i++) {
			st += a;
		}
	}
	long long len = st.length();
	long long sum = 0;
	for (long long i = 0; i < len / 2; i++) {
		if (st[i] != st[len - i - 1]) {
			sum++;
		}
	}
	cout << sum;
	return 0;
}
