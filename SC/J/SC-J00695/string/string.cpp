#include <bits/stdc++.h>
using namespace std;

const int L = 200005;
int a[L];
char c[L];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a[i] >> c[i];
	}
	
	long long ans = 0;
	int l = 0, r = n - 1;
	while (r > l) {
		//similar
		if (c[l] == c[r]) {
			if (a[l] > a[r]) {
				a[l] -= a[r];
				a[r] = 0;
				r--;
			}
			else if (a[r] > a[l]) {
				a[r] -= a[l];
				a[l] = 0;
				l++;
			}
			else if (a[l] == a[r]) {
				a[l] = 0;
				a[r] = 0;
				l++;
				r--;
			}
		}
		//different
		else if (c[l] != c[r]) {
			if (a[l] > a[r]) {
				ans += a[r];
				a[l] -= a[r];
				a[r] = 0;
				r--;
			}
			else if (a[r] > a[l]) {
				ans += a[l];
				a[r] -= a[l];
				a[l] = 0;
				l++;
			}
			else if (a[l] == a[r]) {
				ans += a[l];
				a[l] = 0;
				a[r] = 0;
				l++;
				r--;
			}
		}
	}
	
	cout << ans;
	
	return 0;
}