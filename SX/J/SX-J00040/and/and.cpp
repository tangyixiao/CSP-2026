#include <bits/stdc++.h>
using namespace std;
int a, b, aa[200010];

bool cmp(int x, int y) {
	return x > y;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		cin >> aa[i];
	}
	sort(aa, aa + a, cmp);
	cout << aa[b - 1];
}
