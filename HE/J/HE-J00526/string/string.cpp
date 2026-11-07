#include <bits/stdc++.h>
using namespace std;
long long n;
struct str{
	long long a;
	char c;
}S[200005];
long long cnt = 0, sz = 0;
char check(int x) {
	long long y = 0, fl = 1;
	for (long long i = 1; i <= n && (y + S[i].a) < x; i++) {
		y += S[i].a;
		fl++;
	}
	return S[fl].c;
}
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (long long i = 1; i <= n; i++) {
		cin >> S[i].a >> S[i].c;
		sz += S[i].a;
	}
	for (long long i = 1; i <= sz / 2; i++) {
		if (check(i) != check(sz-i+1)) cnt++;
	}
	cout << cnt;
	return 0;
}
