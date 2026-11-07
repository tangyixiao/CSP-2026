#include <bits/stdc++.h>
using namespace std;
long long n, m;
int a[2000005];
string b;

void add(int t) {
	long long y = t;
	while (t >= 2) {
		b[y] = t % 2;
		t /= 2;
		y--;
	}
	if (t == 1) {
		b[1] = t;
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	for (int i = 1; i <= m; i++) {
		add(a[i]);
	}
	cout << "0";
	return 0;
}