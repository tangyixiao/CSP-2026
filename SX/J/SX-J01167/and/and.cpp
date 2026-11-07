#include <bits/stdc++.h>
using namespace std;
int arr[100005];

int biggest(int a, int b) {
	return a &b;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, big = -1;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	int k = m;
	while (k > 0) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1 + i; j <= n; j++) {
				if (biggest(arr[i], arr[j]) > big) {
					big = biggest(arr[i], arr[j]);
				}
			}
		}
		k--;
	}
	cout << big;
	return 0;
}