#include <algorithm>
#include <iostream>
using namespace std;
#define int long long

struct st {
	int m;
	char s;
} a[500005];
string b;

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].m >> a[i].s;
		sum += a[i].m;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			if (a[i].s == a[j].s) {
				a[i].m += a[j].m;
				a[j].m = 0;
			}
		}
	}
	int t = 0;
	int s1 = sum / 2;
	for (int i = 1; i <= n; i++) {
		t += a[i].m;
		if (t >= s1) {
			int x = s1 - min(t - s1, a[i].m - (t - s1));
			cout << x << endl;
			return 0;
		}
	}
	return 0;
}