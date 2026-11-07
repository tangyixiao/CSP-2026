#include <bits/stdc++.h>
using namespace std;
int a[100005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	string s, k, c = 0;
	int n, j = 0, m = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> k[i];
		for (int d = 0; j < a[i]; d++) {
			s[j] = k[i];
			j++;
		}
		c += a[i];
	}
	int r = 0, l = n - 1;
	int p = n - 1;
	for (int i = 0; i < n; i++) {
		if (a[i] >= a[p]) {
			if (s[r] != s[l]) {
				for (int j = 0; j < a[p]; j++) {

					s[l] = s[r];
					l--;
				}
				m++;
			}
		}
		if (a[i] < a[p]) {
			if (s[r] != s[l]) {
				for (int j = 0; j < a[i]; j++) {

					s[r] = s[l];
					r++;
				}
				m++;
			}
		}
		p--;
	}
	cout << m;
	return;
}