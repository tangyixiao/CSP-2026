#include <bits/stdc++.h>
using namespace std;
int a, b, x[10001], m = 0, s;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> a >> b;
	for (int i = 1; i <= a;)
		cin >> x[i];
	for (int j = 1; j < a; ++j)
		;
	for (int i = 1; i < b; ++i)
		;
	if (m < s)
		m = s;
	cout << m;
	return 0;
}
