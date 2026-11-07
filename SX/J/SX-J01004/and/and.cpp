#include <bits/stdc++.h>
using namespace std;

int erjin(int x) {
	int num = 1;
	int wei = 0;
	int y = 0;
	if (x <= num)
		return x;
	for (int i = 2; i; i++) {
		num *= 2;
		wei = i;
		if (num > x)
			break;
	}
	num /= 2;
	wei = wei - 1;
	for (int i = wei; i >= 0; i--) {
		int v = 0;
		if (x > num) {
			x -= num;
			v = 1;
		}
		y = y * 10 + v;
		num = num / 2;
	}
	return y;
}

int main() {

	//freopen("and.in", "r", stdin);
	//freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	int m;
	//cin >>n>>m;
	cout << erjin(5);
	return 0;
}