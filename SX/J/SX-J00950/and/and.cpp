#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
long long a[N];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m;
	cin >> n >> m;
	int t = 0;
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
		if (a[i] > 4)
			t = 1;
	}
	if (n <= 20) {
		sort(a + 1, a + n + 1);
		long long p = 0, k;
		for (int i = n; i >= m; i--) {
			k = a[i];
			for (int j = i - 1; j >= i - m + 1; j--) {
				k = k &a[j];
			}
			p = max(p, k);
		}
		cout << p;
	} else if (n <= 2000 && n > 20) {
		sort(a + 1, a + n + 1);
		if (m == 1) {
			cout << a[n];
		} else if (m == 2) {
			long long p = 0;
			long long l;
			for (int i = n; i >= 2; i--) {
				l = a[i] & a[i - 1];
				p = max(p, l);
			}
			cout << p;
		} else if (m == n) {
			long long p = a[n];
			for (int i = n - 1; i <= 1; i--) {
				p = p &a[i];
			}
			cout << p;
		}
	} else if (n > 2000) {
		if (t == 0) {
			int t1 = 0, t2 = 0, t3 = 0;
			for (int i = 1; i <= n; i++) {
				if (a[i] == 1)
					t1++;
				if (a[i] == 2)
					t2++;
				if (a[i] == 3)
					t3++;
			}
			if (t2 && t3) {
				if (t2 + t3 >= m)
					cout << 2;
				else if (t2 + t3 < m) {
					if (t2 + t3 + t1 >= m)
						cout << 1;
					else
						cout << "0";
				}
			} else if (t1 && t3) {
				if (t1 + t3 >= m)
					cout << 1;
				else
					cout << "0";
			} else
				cout << "0";
		} else {
			sort(a + 1, a + n + 1);
			cout << a[n - m + 1];
		}

	}
	return 0;
}