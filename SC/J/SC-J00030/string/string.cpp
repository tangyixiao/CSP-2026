#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;

struct str {
	int n;
	char c;
} l_lis[N], r_lis[N];

int n, num, l, r;
char ch;
long long change, now, nextt;
long long suml[N], sumr[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> num >> ch;
		l_lis[i] = {num, ch};
		r_lis[n - i + 1] = {num, ch};
		suml[i] = suml[i - 1] + num;
	}
	for (int i = 1; i <= n; i++) {
		sumr[i] = r_lis[i].n + sumr[i - 1];
	}
	l = 1, r = 1;
	while (now < suml[n]) {
		nextt = min(suml[l], sumr[r]);
		if (l_lis[l].c != r_lis[r].c) {
			change = change + nextt - now;
		}
		now = nextt;
		if (suml[l] < sumr[r]) l++;
		else r++;
	}
	cout << change / 2;
	return 0;
}