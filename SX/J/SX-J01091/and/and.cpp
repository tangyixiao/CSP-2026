#include <bits/stdc++.h>
using namespace std;
const int N = 2 * 1e5+5;
int n, m, b[1005], c[1005], len;
long long a[N];

bool cmp(int a, int b) {
	return a > b;
}

int er(int n) {
	while (n) {
		b[++len] = n % 2;
		n /= 2;
	}
	for (int i = 1; i <= len; i++) {
		c[i] = b[len - i + 1];
	}
}

int main() {
//	freopen("and.in","r",stdin);
//	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n, cmp);
	er(a[1]);
	for (int i = 2; i <= m; i++) {
		er(a[i]);
		a[i] = a[i - 1] & a[i];
	}
	cout << a[m];
//	fclose(stdin);
//	fclose(stdout);
	return 0;
}
