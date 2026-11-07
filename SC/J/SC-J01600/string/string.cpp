#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
long long n, a[N], l, r, num = 0;
char c[N];
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	cin >> n;
	for(int i = 1; i <= n; ++i) {
		cin >> a[i] >> c[i];
	}
	l = 1, r = n;
	while(l < r) {
		if(c[l] != c[r]) {
			num += min(a[l], a[r]);
		}
		if(a[l] < a[r]) {
			a[r] -= a[l];
			l++;
		}
		else if(a[l] > a[r]) {
			a[l] -= a[r];
			r--;
		}
		else {
			l++;
			r--;
		}
	}
	cout << num;
	return 0;
}