#include <bits/stdc++.h>
using namespace std;

const int N = 200005;
long long a[N];
char c[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n = 0, numz = -1, numf = -1, half = 0, s = -1, j = -1, num = 0;
	char strz, strf;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> c[i];
		half += a[i];
	}
	if (half % 2 != 0) {
		half++;
	}
	half /= 2;
	numf = n + 1;
	s = n;
	for (int i = 0; i < half; i++) {
		if (i > numz) {
			j++;
			numz += a[j];
		}
		strz = c[j];
		if (s < numf) {
			s--;
			numf -= a[s];
		}
		strf = c[s];
		if (strz != strf) {
			num++;
		}
	}
	cout << num;

	return 0;
}
