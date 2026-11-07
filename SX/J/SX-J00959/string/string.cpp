#include <bits/stdc++.h>
using namespace std;
long long a[200099];
char b[200099];
int c[200099];

int main() {
	freopen("string.in", "r", stdin );
	freopen("string.out", "w", stdout );
	int n;
	cin >> n;
	cout << n;
	for ( int i = 0; i <= n - 1; i++) {
		cin >> a[i] >> b[i];
	}
	long long gx = 0;
	int aa = 0, bb = n - 1;
	int xy = n / 2 + 1;
	for (int i = 1; i <= xy; i++) {
		if (bb != aa) {
			if (b[aa] == b[bb]) {
				if (a[aa] > b[aa]) {
					bb -= 1;
				}

			}
		}

	}








	return 0;

}
