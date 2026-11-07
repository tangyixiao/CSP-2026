#include <bits/stdc++.h>
using namespace std;
long long a[1000005];
char c[1000005];
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
int n;
cin >> n;
for (int i = 1; i <= n; i++) {
	cin >> a[i] >> c[i];
}
int l = 1;
int r = n;
long long int sum = 0;
while(l < r) {
	if (c[l] != c[r]) {
		if (a[l] > a[r]) {
			a[l] -= a[r];
			sum += a[r];
			r--;
		}else {
			a[r] -= a[l];
			sum += a[l];
			l++;
		} 
	}else {
		if (a[l] > a[r]) {
			a[l] -= a[r];
			r--;
		}else {
			a[r] -= a[l];
			l++;
		} 
	}
}
cout << sum;
	return 0;
}
