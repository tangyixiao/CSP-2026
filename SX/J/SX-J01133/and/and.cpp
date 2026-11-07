#include <bits/stdc++.h>
using namespace std;
long long a[200100];
int b1[200100], c1[200100], ds[200100];

long long sqre(int b, long long c) {
	long long sum = 1;
	for (int i = 1; i = c; i++) {
		sum *= b;
	}
	cout << sum;
}

long long and1 (long long b, long long c) {
	int sum1 = 0, sum2 = 0, sum;
	long long ds1 = 0;
	for (int i = 1; i > 0; i++) {
		b1[i] = b % 2;
		b /= 2;
		sum1++;
		if (b == 0) {
			break;
		}
	}
	for (int i = 1; i > 0; i++) {
		c1[i] = c % 2;
		c /= 2;
		sum2++;
		if (c == 0) {
			break;
		}
	}
	sum = max(sum1, sum2);
	for (int i = 1; i <= sum; i++) {
		if (b1[i] != 0 && c1[i] != 0) {
			ds[i] = 1;
		}
	}
	for (int i = 0; i < sum; i++) {
		ds1 += ds[i + 1] * sqre(2, i);
	}
	return ds1;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, ss;
	cin >> n >> ss;
	for (long long i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int maxa = INT_MIN, sss;
	for (long long i = 1; i <= n - 1; i++) {
		for (long long j = i; j <= n; j++) {
			sss = and1 (a[i], a[j]);
			for (int k = 2; k <= ss; k++) {
				sss = and1 (sss, a[j + k - 1]);
				if (sss > maxa) {
					maxa = sss;
				}
			}

		}
	}
	cout << sss;
	return 0;
}
