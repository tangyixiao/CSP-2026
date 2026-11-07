#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
int x[N];
char y[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x[i];
		cin >> y[i];
	}
	int l = 0, r = n - 1;
	long long cnt = 0;
	while (l < r) {
		//cout << cnt << " " << l << "()" << r << endl;
		if (y[r] == y[l]) {
			if (x[r] > x[l]) {
				x[r] = x[r] - x[l];
				l++;
			} else if (x[r] == x[l]) {
				l++;
				r--;
			} else {

				x[l] = x[l] - x[r];
				r--;
			}
		} else {
			if (x[r] > x[l]) {
				cnt += x[l];
				x[r] = x[r] - x[l];
				l++;
			} else if (x[r] == x[l]) {
				cnt += x[l];
				l++;
				r--;
			} else {
				cnt += x[r];
				x[l] = x[l] - x[r];
				r--;
			}
		}
	}
	cout << cnt;
	return 0;
}
