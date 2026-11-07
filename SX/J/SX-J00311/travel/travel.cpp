#include <bits/stdc++.h>
using namespace std;
int arr[4];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a[0] == c[0] && a[1] == c[1]) {
		arr[0] = 1;
	}
	if (b[0] == d[0] && b[1] == d[1]) {
		arr[1] = 1;
	}
	if (b[2] == 'A' || b[2] == 'B' || b[2] == 'C') {
		if (d[2] == 'A' || d[2] == 'B' || d[2] == 'C') {
			arr[2] = 1;
		}
	} else if (b[2] == 'D' || b[2] == 'F') {
		if (d[2] == 'D' || d[2] == 'F') {
			arr[2] = 1;
		}
	}
	if (b[2] == 'A') {
		if (d[2] == 'B') {
			arr[3] = 1;
		}
	} else if (b[2] == 'B') {
		if (d[2] == 'A') {
			arr[3] = 1;
		} else if (d[2] == 'C') {
			arr[3] = 1;
		}
	} else if (b[2] == 'C') {
		if (d[2] == 'B') {
			arr[3] = 1;
		}
	} else if (b[2] == 'D') {
		if (d[2] == 'F') {
			arr[3] = 1;
		}
	} else if (b[2] == 'F') {
		if (d[2] == 'D') {
			arr[3] = 1;
		}
	}
	for (int i = 0; i <= 3; i++) {
		if (arr[i] == 0) {
			for (int j = i; j <= 3; j++) {
				arr[j] = 0;
			}
		}
	}
	for (int i = 0; i <= 3; i++) {
		cout << arr[i];
	}
	return 0;
}
