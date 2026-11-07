#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+5;
ll sum;
char a[N];
int n, b[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++)
		scanf("%d %c", &b[i], &a[i]);
	int l = 1, r = n;
	while (l < r) {
		if (a[l] != a[r]) {
			if (b[l] == b[r]) {
				sum += b[r];
				l++, r--;
				continue;
			} else {
				if (b[l] < b[r]) {
					sum += b[l];
					b[r] -= b[l];
					l++;
					continue;
				} else {
					sum += b[r];
					b[l] -= b[r];
					r--;
					continue;
				}
			}
		} else {
			if (b[l] > b[r]) {
				b[l] -= b[r];
				r--;
			} else {
				b[r] -= b[l];
				l++;
			}
		}
	}
	cout << sum;
	return 0;
}
