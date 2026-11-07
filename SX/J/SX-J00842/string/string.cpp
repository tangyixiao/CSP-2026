#include <bits/stdc++.h>
using namespace std;
char arr[100000005];
int a;
char c;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, cnt = 0, sum = 0;
	int m = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> c;
		for (int j = 0; j < a; j++) {
			arr[m] = c;
			m++;
		}
		sum += a;
	}
	if (sum % 2 != 0) {
		for (int i = 0; i <= sum / 2 - 1; i++) {
			if (arr[i] == arr[m - i]) {
				cnt += 1;
			} else {
				continue;
			}
		}
	} else {
		for (int i = 0; i <= sum / 2 ; i++) {
			if (arr[i] == arr[m - i]) {
				cnt += 1;
			} else {
				continue;
			}
		}
	}
	cout << cnt;
	return 0;
}