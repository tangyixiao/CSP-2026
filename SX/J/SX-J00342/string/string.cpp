#include <bits/stdc++.h>
using namespace std;
long long n, a, cnt;
char b;
string s, d;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n; //有几段
	for (int i = 1; i <= n; i++) {
		cin >> a >> b; //每段的字母有几个，是什么
		for (int j = 1; j <= a; j++) { //将这些字母都放入s字符串中
			s += b;
		}
	}
	for (int i = s.size() - 1; i >= 0; i--) {//将字符串翻转过来
		d += s[i];
	}
	if (s == d) {//判断字符串是否相等
		cout << 0;
	} else {
		for (int i = 0; i <= s.size() - 1; i++) {//修改字符串
			if (s[i] != d[i]) {
				s[s.size() - 1 - i] = s[i];
				d[i] = s[i];
				cnt++;//记录修改的次数
			}
		}
		cout << cnt;//输出次数
	}
	return 0;
}