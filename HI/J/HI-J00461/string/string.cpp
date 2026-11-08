#include <iostream>
using namespace std;

int main() {
	freopen("string.in",  "r", stdin);
	freopen("string.out", "w", stdout);
	
	int n;
	cin >> n;
	int a[200005], sum = 0;
	char c[200005];
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		sum += a[i];
	}
	
	// aabbc
	// aabb
	int l = 1, x = 1, y = n;
	long long ans = 0;
	while (l <= sum/2) {
		int dis;
		if (l+a[x] <= sum/2+1) dis = a[x];
		else dis = sum/2-l+1;
		while (dis) {
			if (dis >= a[y]) {
				dis -= a[y];
				if (c[x] != c[y]) ans += a[y--];
			}
			else {
				a[y] -= dis;
				if (c[x] != c[y]) ans += dis;
				dis = 0;
			}
		}
		if (l+a[x] <= sum/2+1) l += a[x++];
		else l = sum/2+1;
	}
	cout << ans;
}
