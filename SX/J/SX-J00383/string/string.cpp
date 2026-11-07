#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
int n;
long long ans, a[N], sum, sum2;
char c[N];

//a<=1e9 非常大...
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		sum += a[i];
	}
	long long f = n;
	for (int i = 1; i < n; i++) {
		//	cout << f << "$";
		int t = f + 1 - i;
		//	cout << i << t << "&";
		if (i > t) {
			break;
		}
		if (c[i] != c[t]) { //第一项，和对应不同
			sum2 = min(a[i], a[t]); //有几个字符要被修改
			ans += sum2;
			//cout << ans << i << n << "   %    ";
			//改变对应位置，更新循环次数
			if (a[i] > a[t]) {
				a[i] -= a[t];
				i--;
				n--;
				f--;
			} else if (a[i] == a[t]) {
				//cout << "&&";
				n--;
				//cout << i + 1 << n;
			} else {
				//不用管，下一次i++
				a[t] -= a[i];
				f++;
			}
		} else {
			if (a[i] == a[t]) {
				n--;
			} else if (a[i] > a[t]) {
				a[i] -= a[t];
				n--;
				i--;
				f--;
			} else {
				a[t] -= a[i];
				//	cout << "ffff";
				f++;
			}
		}
		//	cout << ans << i << n << "   %    ";
	}
	cout << ans;
	return 0;
}