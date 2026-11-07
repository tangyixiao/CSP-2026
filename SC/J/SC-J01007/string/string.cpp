#include<bits/stdc++.h>
using namespace std;
int n;
int a[500005];
char c[500005];
string t1[9999999];
long long cnt, k, cn1 = 1;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		k += a[i];
		while (a[i]--) {
			t1[cn1++] = c[i];
		}
	}
	long long l = 1, r;
	if (k % 2 == 0) {
		r = k / 2 + 1;
	} else {
		r = k / 2 + 2;
	}
	while (r <= k) {
		if (t1[l] != t1[r]) {
			cnt++;
		}
		l++;
		r++;
	}
	cout << cnt;
	return 0;
}
