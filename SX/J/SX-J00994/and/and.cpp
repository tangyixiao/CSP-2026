#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	//按位与结果根据最小值决定，本质在n个中选出m个最大值
	long long n, m;
	cin >> n >> m;
	long long a[n + 5];
	for (long long i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	long long ans = a[n - m];
	for (int i = n - m + 1; i < n; i++) {
		cout << ans << " " << a[i] << endl;
		ans = ans &a[i];
	}
	cout << ans;
	return 0;
	/*
	1000 1100 1101 0110 -> 0000
	1110 1101 1011 1111 -> 1000



	*/
}