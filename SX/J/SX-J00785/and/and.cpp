#include <bits/stdc++.h>
using namespace std;
int s[100005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int m, n;
	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		int c;
		cin >> s[i];
	}
	for (int i = 0; i < m; i++) {
		if (s[i] > s[i + 1])
			swap(s[i], s[i + 1]);
	}
	int cnt = 0;
	if (m % 2 == 0)
		cnt = m / 2;
	else
		cnt = m / 2 + 1;
	cout << s[cnt] ;
	return 0;
}
