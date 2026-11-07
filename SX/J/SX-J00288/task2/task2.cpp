#include <bits/stdc++.h>
using namespace std;
int n, x, cnt;
int a[1000005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdin);


	string y;
	for (int i = 1; i <= n; i++) {
		cin >> x >> y;
		cnt++;
		a[cnt] = x;
	}
	for (int i = 1; i < cnt; i++) {
		if (a[i] == a[i + 1])
			cout << a[i]*a[cnt];
		else
			cout << 0;
	}

	return 0;
}
