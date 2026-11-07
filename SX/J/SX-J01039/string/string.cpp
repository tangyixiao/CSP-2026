#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
char s[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long t, n, cnt = 1, sum = 0, cn = 1,
	                yongshoujiwanbianyubashituijianshiyongkuyoujiasuqikuyoujiasuqiyijianhanhuamianfeijiasuxianzaichonghuiyuanhainenglingdishisaijitongxingzhengchaojishihuikuailaishishiba
	                = 0;
	char c;
	cin >> t;
	while (t--) {
		cin >> n >> c;
		sum += n;
		for (int i = 1; i <= n; i++) {
			s[cnt] = c;
			cnt++;
		}
	}
	if (sum % 2 != 0) {
		for (int i = sum / 2 + 1; i <= sum; i++) {
			if (s[i] != s[sum / 2 + 1 - cn]) {
				yongshoujiwanbianyubashituijianshiyongkuyoujiasuqikuyoujiasuqiyijianhanhuamianfeijiasuxianzaichonghuiyuanhainenglingdishisaijitongxingzhengchaojishihuikuailaishishiba++;
			}
		}
	}
	cout << yongshoujiwanbianyubashituijianshiyongkuyoujiasuqikuyoujiasuqiyijianhanhuamianfeijiasuxianzaichonghuiyuanhainenglingdishisaijitongxingzhengchaojishihuikuailaishishiba;
	return 0;
}