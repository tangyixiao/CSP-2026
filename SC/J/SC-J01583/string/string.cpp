#include <iostream>
using namespace std;

const int MAXN = 2e5 + 5;
int n, a[MAXN], b[MAXN];
char c;
long long ans;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c;
		b[i] = c - 'a';
	}
	for (int i = 1, j = n, x = 0, y = 0, s = 0, t = 0, k = 0; i < j;) {
		if (x == 0) x += a[i], s = b[i];
		if (y == 0) y += a[j], t = b[j];
		
		k = min(x, y), x -= k, y -= k;
		if (s != t) ans += k;
		
		if (x == 0) i++;
		if (y == 0) j--;
	}
	cout << ans;
	
	return 0;
}