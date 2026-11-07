#include <bits/stdc++.h>
using namespace std;

bool cmp(long long x1, long long x2) {
	return x1 > x2;
}

int main() {
	freopen("and.in", "r", "stdin");
	freopen("and.out", "w", "stdout");
	long long n, m;

	cin >> n >> m;
	long long max1 = -1000;
	long long arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		max1 = max(max1, arr[i]);
	}
	sort(arr, arr + n - 1, cmp);
	long long sum = arr[1];
	if (m = 1) {
		cout << max1;
	} else {
		for (int i = 0; i < m; i++) {
			sum = (sum &arr[i]);
		}
		cout << sum;
	}
	return 0;
}
