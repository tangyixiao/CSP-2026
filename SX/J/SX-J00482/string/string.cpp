#include <bits/stdc++.h>
using namespace std;

struct strc {
	int num;
	char zimu;
};

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	//制作总字符串 ok
	int n, c = 0;
	cin >> n;
	strc pstr[n];
	string s1 = "";
	for (int i = 0; i < n; i++) {
		cin >> pstr[i].num >> pstr[i].zimu;
		for (int j = 0; j < pstr[i].num; j++) {
			s1 += pstr[i].zimu;
		}
	}

	//制作正反串
	string zhen = "", fan = "", fan2 = "";
	int l = s1.size();
	if (l % 2 == 0) {
		for (int i = 0; i < l / 2; i++) {
			zhen += s1[i];
			fan += s1[l - i];
			c--;
		}
	} else {
		for (int i = 0; i < l / 2; i++) {
			zhen += s1[i];
			fan += s1[l - i - 1];
		}
	}
	for (int i = fan.size() - 1; i >= 0; i--) {
		fan2 += fan[i];
	}
	//判断
	int lban = zhen.size();
	for (int i = 0; i < lban; i++) {
		if (zhen[i] != fan2[i]) {
			c++;
		}
	}
	cout << c;
	return 0;
}
