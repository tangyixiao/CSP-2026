//生活就像TOMATO，去掉OmO只剩TwT
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
const int MAXN = 2e5 + 10;
int n, m;
unsigned int arr[MAXN];

unsigned int solveMEN() {
	unsigned int rst = UINT_MAX;
	for (int i = 1; i < n; i++) {
		rst &= arr[i];
		//cout << rst << endl;
	}
	return rst;
}

unsigned int solveME2() {
	unsigned int rst = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			rst = max(rst, arr[i] & arr[j]);
		}
	}
	return rst;
}

unsigned int solveME1() {
	unsigned int rst = 0;
	for (int i = 0; i < n; i++) {
		rst = max(rst, arr[i]);
	}
	return rst;
}

unsigned int solveSPA() {
	sort(arr, arr + n, greater<unsigned int>());
	return arr[m - 1];
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	if (m == n) {
		cout << solveMEN();
	} else if (m == 2) {
		cout << solveME2();
	} else if (m == 1) {
		cout << solveME1();
	} else {
		cout << solveSPA();
	}
}
