#include <bits/stdc++.h>
using namespace std;
long long all, sum;

struct node {
	long long x;
	char y;
} a[200010];
long long n;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	long long j = 0;
	for (int i = 1; i <= n; i++) {
		node b;
		cin >> b.x >> b.y;
		if (b.y == a[j].y) {
			a[j].x += b.x;
		} else {
			a[++j] = b;
		}
		all += b.x;
	}
//	for (int i = 1; i <= j; i++) {
//		cout << a[i].x << " " << a[i].y << endl;
//	}
	long long l = 1;
	long long r = j;
	while (r > l) {
		if (a[l].y == a[r].y) {
			long long ls = min(a[l].x, a[r].x);
			a[l].x -= ls;
			a[r].x -= ls;
			if (a[l].x == 0)
				l++;
			if (a[r].x == 0)
				r--;
		} else {
			long long ls = min(a[l].x, a[r].x);
			sum += ls;
			a[l].x -= ls;
			a[r].x -= ls;
			if (a[l].x == 0)
				l++;
			if (a[r].x == 0)
				r--;
		}
//		cout << l << " " << a[l].x << " " << a[l].y << "   " << r << " " << a[r].x << " " << a[r].y << endl;
	}
	cout << sum;
	return 0;
}
