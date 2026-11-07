#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
long long n, m, a[N], ans;

bool cmp(int x, int y) {
	return x > y;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1, cmp);//将所有数按从大到小排序
	ans = a[1];
	for (int i = 2; i <= m; i++) {//进行m次与运算
		ans = ans &a[i];
	}
	cout << ans;//输出与运算后的值
	return 0;
}