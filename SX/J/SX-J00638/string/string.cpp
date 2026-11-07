#include <bits/stdc++.h>
using namespace std;
const int maxn = 3e6+100;
int s[maxn], d[maxn];
int n, l, r, cnt, lon;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	while (n--) {
		int a = 0;
		char x = 0;
		cin >> a >> x;
		int c = x - '0';
		lon += a;
		r += a;
		d[l] += c;
		d[r] -= c;
		l += a;
	}
	for (int i = 0; i < lon; i++) {
		s[i] = d[i] + s[i - 1];
	}
	for (int i = 0; i <  lon / 2 ; i++) {
		if (s[i] != s[lon - i - 1])
			cnt++;
//		cout << s[i] << " ";
	}
	cout << cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
