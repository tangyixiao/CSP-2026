#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b) {
	return a > b;
}

void input(int &a) {
	a = 0;
	char x = getchar();
	while (x != ' ' && x != '\n')
		a = a * 10 + (x - '0'), x = getchar();
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	input(n);
	input(m);
	int a[n];
	for (int i = 0; i < n; i++)
		input(a[i]);
	sort(a, a + n, cmp);
	int ans = a[0];
	for (int i = 0; i < m; i++)
		ans &= a[i];
	cout << ans;
	return 0;
}
