#include <bits/stdc++.h>
using namespace std;
long long t;//数据组数
long long num;//每个字符的个数
long long len;//记录字符串长度
long long ans;
string s;
string l;//临时储存

void shuru(long long i) {
	for (long long j = 1; j <= i; j++) {
		cin >> num >> l;
		for (long long k = 1; k <= num; k++) {
			s += l;
			len++;
		}
		l = "";
	}
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> t;
	shuru(t);
//	cout << s << endl << len << endl;
	for (long long i = 0; i < len / 2; i++) {
		if (s[i] != s[len - i - 1]) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}