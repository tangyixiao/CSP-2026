#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	long long n;
	cin >> n;
	int a[200010];
	char c[200010];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		cin >> c[i];
	}
	long long cnt = 0;
	long long l = 1 , r = n;
	while (l < r) {
		if (c[l] != c[r]) {
		    if (a[l] > a[r]) {
		    	cnt += a[l] - a[r];
		    	a[l] -= a[r];
		    	r--;
			} else if (a[l] < a[r]) {
				cnt += a[r] - a[l];
				a[r] -= a[l];
				l++;
			} else {
				cnt += a[l];
				l++;
				r--;
			}
		} else {
			if (a[l] > a[r]) {
		    	a[l] -= a[r];
		    	r--;
			} else if (a[l] < a[r]) {
				a[r] -= a[l];
				l++;
			} else {
				l++;
				r--;
			}
		}
	}
	cout << cnt;
	return 0;
}