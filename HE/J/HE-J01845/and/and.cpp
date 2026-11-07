#include <bits/stdc++.h>
using namespace std;
int a[200005];
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for (int i = 0;i < n; i++) {
		cin >> a[i];
	}
	sort(a,a + n);
	if (m == 1) {
		cout << a[n- 1];
		return 0;
	}else if (m == 2) {
		int sum = 0;
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (a[i] | a[j] >= sum) {
					sum = a[i] & a[j];
				}
			}
		}
		cout << sum;
	}else if (m == n) {
		int x= a[0];
		for (int i = 1; i< n; i++) {
			x = x & a[i];
		}
		cout << x;
	}
	return 0;
}
