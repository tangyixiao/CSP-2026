#include <bits/stdc++.h>
using namespace std;

struct node {
	int cnt;
	char w;
} a[200009];
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	long long cnt = 0;
	string x, y, w;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].cnt >> a[i].w;
		cnt += a[i].cnt;
	}
	for (int i = 1; i <= n; i++) {
		a[i].cnt += a[i - 1].cnt;
	}
	s[0] = a[1].w;
	for (int i = 2; i <= n; i++) {
		s[a[i - 1].cnt] = a[i].w;
	}
	for (int i = 0; i < cnt; i++) {
		if (s[i] >= 'a' && s[i] <= 'z') ;
		else
			s[i] = s[i - 1];
	}
	for (int i = 0; i < cnt / 2; i++) {
		x[i] = s[i];
	}
	if (cnt % 2 == 0) {
		for (int i = cnt / 2; i < cnt; i++)
			y[i - cnt / 2] = s[i];
	}
	if (cnt % 2 == 1) {
		for (int i = cnt / 2 + 1; i < cnt; i++) {
			y[  i - cnt / 2 - 1 ] = s[i];
		}

	}
	long long ans = 0;
	for (int i = 0; i < cnt / 2; i++) {
		swap(x[i], x[cnt / 2 - i - 1]);
		if (x[i] != y[i])
			ans++;
	}
	cout << ans << endl;
	return 0;
}
