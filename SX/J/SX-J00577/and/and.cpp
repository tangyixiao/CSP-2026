#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 * 2 + 10;
int a[N];

//int zejz(int x) {//转二进制function
//	int r[40];
//	int i = 0;
//	while (x != 0) {
//		r[i] = x % 2;
//		x /= 2;
//		i++;
//	}
//	for (int j = i; j >= 0; i--) {
//		return r[i];
//	}
//}
//
//int zhsjz(int y) {
//	int i = 0;
//	int sum = 0;
//	while (y != 0) {
//		int q = y % 10;
//		q *= (int)pow(2, i);//按位权乘开
//		sum += q;
//		i++;
//	}
//	return sum;
//}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	reverse(a + 1, a + n + 1);
	sort(a + 1, a + m + 1);
	cout << a[1];
	return 0;
}