#include <bits/stdc++.h>
using namespace std;
long long n, d, cnt = 0, rtw, ppp = 0;
char ccc;
string dd;

int work1(long long x, string b) {
	long long sum = 0;
	int ff;

	while (x > 0) {
		ff = x % 10;
		sum = ff + sum * 10;
		x / 10;
	}
	for (int i = 0; i < ppp; i++) {
		if (sum[ppp - i] != b[i])
			cnt++;
	}
	return cnt;
}

int main() {

	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> d >> ccc;
		ccc = ccc - 96;
		for (int j = 1; j <= d; i++) {
			rtw = rtw * 10 + ccc;
			dd = dd * 10 + ccc;
			ppp++;
		}
	}
	cout << work1(rtw, dd);

	return 0;
}
