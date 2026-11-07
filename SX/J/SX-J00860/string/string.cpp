#include <bits/stdc++.h>
using namespace std;

struct ss {
	long long s;
	char z;
} a[200010], b[200010];

int main() {
//	freopen("string.in", "r", stdin);
//	freopen("string.out", "w", stdout);
	long long n, s = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		long long  x;
		char z;
		int t;
		//	cout << 1;
		//	scanf("%d", &t);
		//	scanf("%lld", &x);
		//	cin >> t;
		//	scanf("%c", &z);
		//scanf("");

		a[i].s = x;
		a[i].z = z;
		//	cout << a[i].s << " " << a[i].z << endl;
		cin >> a[i].s >> a[i].z;
	}

//	for (int i = 1; i <= n; i++) {
//		cout << b[i].x << " " << b[i].z << endl;
//	}
	int l = 1, r = n;
	while (l <= n / 2 && r >= n / 2) {
		if (a[l].z == a[r].z) {
			if (a[l].s > a[r].s) {
				a[l].s -= a[r].s;
				r--;
			} else if (a[l].s < a[r].s) {
				a[r].s -= a[l].s;
				l++;
			} else if (a[l].s == a[r].s) {
				a[l].s = 0;
				a[r].s = 0;
				l++;
				r--;
			}
		} else if (a[l].z != a[r].z) {
			if (a[l].s > a[r].s) {
				s += a[r].s;
				a[l].s -= a[r].s;
				r--;

			} else if (a[l].s < a[r].s) {
				s += a[l].s;
				a[r].s -= a[l].s;
				l++;

			} else if (a[l].s == a[r].s) {
				s += a[l].s;
				//	cout << a[l].s << " ";
				a[l].s = 0;
				a[r].s = 0;
				l++;
				r--;


			}
		}
	}
//	for (int i = 1; i <= n; i++) {
//		cout << a[i].s << " ";
//	}
	cout << s;
	return 0;
}