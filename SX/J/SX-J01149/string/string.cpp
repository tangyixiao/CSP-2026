#include <bits/stdc++.h>
using namespace std;
const int MAXN = 200026;
long long a[MAXN], n, l, r, p;
char b[MAXN];
long long ans;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
	}
	l = 1;
	r = n;
	for (; l < r;) {
		p = min(a[l], a[r]);
		if (b[l] != b[r]) {
			ans += min(a[l], a[r]);
		}
		a[l] = a[l] - p;
		a[r] = a[r] - p;
		if (a[r] <= 0)
			r--;
		if (a[l] <= 0)
			l++;
		//cout << "ans+=" << p << " l=" << l << " r=" << r << " a[l]=" << a[l] << " a[r]=" << a[r] << endl;
		//这是我的桩子~
	}
	//l=r时,注定b[l]=b[r],不作处理
	cout << ans;

	return 0;
}

//纪念传奇变量p，依旧实时求最小值，依旧不考虑程序并列问题
//耗费我10min查错qwq