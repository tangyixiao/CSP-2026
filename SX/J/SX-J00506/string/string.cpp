#include <bits/stdc++.h>

using namespace std;

long long n, arr[2000086], ans;
char crr[2000086];
string s;

struct node {
	int num;
	int word;
} l, r;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> arr[i] >> crr[i];
	l.num = arr[1], l.word = crr[1];
	r.num = arr[n], r.word = crr[n];
	int m, l1 = 1, r1 = n;
	while (l1 <= r1) {
		if (l.word != r.word) {
			ans += min(l.num, r.num);
		}
		if (l.num > r.num) {
			l.num -= r.num;
			r.num = arr[--r1];
			r.word = crr[r1];
		} else {
			r.num -= l.num;
			l.num = arr[++l1];
			l.word = crr[l1];
		}
	}
	cout << ans;
	return 0;
}
/*

3
2 a
2 b
1 c


2
2 a
3 a

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b



*/
