#include <bits/stdc++.h>
using namespace std;
struct number {
	int a, b;
}x[500005];
bool cmp (number f, number j) {
	return f.a < j.a;
}
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> x[i].a;
		x[i].b = i;
	}
	sort(x + 1, x + n + 1, cmp);
	for (int i = 1; i <= n; i++) {
		cout << x[i].b << ' ';
	}
	return 0;
} 
