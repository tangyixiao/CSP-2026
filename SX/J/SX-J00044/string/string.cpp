//string
#include <bits/stdc++.h>
using namespace std;
const long long I = 1e9+10;
long long cnt = 0, nf = 0;
int n;
char st[I];
bool flag = true, tepan = true;
char gong;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int sf;
		cin >> sf;
		char cf;
		cin >> cf;
		gong = cf;
		for (int j = nf; j < nf + sf; j++) {
			st[j] = cf;
		}
		nf += sf;
	}
	if (n == 1) {
		cout << "0";
		return 0;
	}
	for (int k = 0; k < nf; k++) {
		if (st[k] != gong) {
			tepan = false;
		}
	}
	if (tepan == true) {
		cout << "0";
		return 0;
	}
	int l = 0, r = nf - 1;
	while (l <= r) {
		if (st[l] != st[r]) {
			cnt++;
			flag = false;
		}
		l++;
		r--;
	}
	if (flag == true) {
		cout << "0";
		return 0;
	}
	cout << cnt;
	return 0;
}
