#include <bits/stdc++.h>
using namespace std;
int a[100010], b[100010];

int cmp(int z, int x) {
	return z > x;
}

int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int z, x;
	cin >> z >> x;
	for (int i = 1; i <= z; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + z + 1, cmp);
	for (int i = 1; i <= z; i++) {
		b[i] = a[i];
		for (int j = i; j <= x; j++) {
			b[i] = b[i] & a[j];
		}
	}
	sort(b + 1, b + z + 1, cmp);
	cout << b[1];
	return 0;
}