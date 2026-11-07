#include <bits/stdc++.h>
using namespace std;
int N = 200005;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	long long size = 0;
	int arr[N], brr[N];
	char arrl[N], brrl[N];
	for (int i = 1; i <= n; i++) {
		cin >> arr[i] >> arrl[i];
		brr[n - i + 1] = arr[i];
		brrl[n - i + 1] = arrl[i];
		size += arr[i];
	}
	long long ans = 0, ai = 1, bi = 1;
	while (size) {
		if (arrl[ai] == brrl[bi]) {
			if (arr[ai] > brr[bi]) {
				arr[ai] -= brr[bi];
				size -= brr[bi];
				brr[bi] = 0;
				bi++;
			} else {
				brr[bi] -= arr[ai];
				size -= arr[ai];
				arr[ai] = 0;
				ai++;
			}
		} else if (arrl[ai] != brrl[bi]) {
			if (arr[ai] > brr[bi]) {
				arr[ai] -= brr[bi];
				size -= brr[bi];
				ans += brr[bi];
				brr[bi] = 0;
				bi++;
			} else {
				brr[bi] -= arr[ai];
				size -= arr[ai];
				ans += arr[ai];
				arr[ai] = 0;
				ai++;
			}
		}
	}
	cout << ans / 2;
	return 0;
}
