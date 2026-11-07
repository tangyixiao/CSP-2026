#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;

struct node {
	long long sl;
	char zm;
} a[N];
int n;
unsigned long long k;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i].sl >> a[i].zm;
	int l = 1, r = n;
	while (l <= r) {
		if (l == r) {
			break;
		}
		if (a[l].zm == a[r].zm) {
			if (a[l].sl < a[r].sl) {
				a[r].sl -= a[l].sl;
				l++;
			} else if (a[l].sl > a[r].sl) {
				a[l].sl -= a[r].sl;
				r--;
			} else {
				l++;
				r--;
			}
		} else {
			if (a[l].sl < a[r].sl) {
				a[r].sl -= a[l].sl;
				k += a[l].sl;
				l++;
			} else if (a[l].sl > a[r].sl) {
				a[l].sl -= a[r].sl;
				k += a[r].sl;
				r--;
			} else {
				k += a[l].sl;
				l++;
				r--;
			}
		}
	}
	cout << k;
	return 0;
}
