#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n = 0, a[400010] = {};
	long long le = -2; 
	char b[400010] = {};
	long long sum = 0;
	bool o = 0;
	cin >> n;
	memset(a, 0, sizeof(a));
	for (int i = 0; i < n; ++i) cin >> a[i * 2] >> b[i * 2], sum += a[i * 2];
	if (sum % 2 == 1) sum = sum / 2 + 1, o = 1;
	else sum /= 2;
//	cout << sum << endl;
	for (int i = 0; i < n; i += 2) {
		if (sum < a[i]) {
			a[i + 1] = a[i] - sum; 
			a[i] -= sum;
			b[i + 1] = b[i];
		} else sum -= a[i];
		le += 2;
	}

//	cout << le << endl;
	if (o) a[le]--;
	int l = le, r = le + 1;
	long long cnt = 0;
	while (l >= 0 && r < 2 * n) {
		while (a[l] == 0 && l >= 0) --l;
		while (a[r] == 0 && r < 2 * n) ++r;
		long long m = min(a[l], a[r]);
//				cout << l << " " << r << " " << a[l] << " " << a[r] << " " << b[l] << " " << b[r] << " " << m << endl;
		a[l] -= m, a[r] -= m;
		if (b[l] != b[r]) cnt += m;
		if (a[l] > 0) ++r;
		else --l;
	}
	cout << cnt;

	return 0;
}
//freopen CCF int mian() int mani() feropen 哈哈哈我没救了 我写的sb代码只会输出0哈哈哈 luogu:Just_a_oler R.I.P什么 你问我为什么不是oIer 因为蠢  哈哈哈 有救了 我真sb 前面改了变量名然后后面指针上的忘改了 就这破问题浪费我将近一小时 
