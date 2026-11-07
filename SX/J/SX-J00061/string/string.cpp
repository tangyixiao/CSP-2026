#include <bits/stdc++.h>
using namespace std;
long long n;
long long ai;
long long m;
char a[1000000010];
long long cnt;

struct node {
	long long gs;
	char zm;
} b[200010];
bool gs_all_same = 1;
bool zm_all_same = 1;

void huiwen1() {
	for (int i = 1, j = m; i <= m / 2 && j >= m / 2; i++, j--) {
		cout << 1;
		if (a[i] != a[j]) {
			cnt++;
		}
	}
	return;
}

void huiwen() {
	for (int i = 1, j = n; i <= n / 2 && j >= n / 2; i++, j--) {
		cout << 1;
		if (a[i] != a[j]) {
			if (b[i].gs < b[j].gs) {
				cnt += b[i].gs;
				cout << b[i].gs;
			}
		}
	}
	return;
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	if (n == 1) {
		cout << 0;
		return 0;
	}
	if (n == 0) {
		cout << 0;
		return 0;
	}
	cin >> b[1].gs >> b[1].zm;
	for (int i = 2; i <= n; i++) {
		cin >> b[i].gs >> b[i].zm;
		if (b[i].zm != b[i - 1].zm) {
			zm_all_same = 0;
		}
	}
	if (n == 2) {
		if (b[1].zm == b[2].zm) {
			cout << 0;
			return 0;
		} else {
			if (b[1].gs > b[2].gs) {
				cout << b[2].gs;
			} else {
				cout << b[1].gs;
			}
		}
	}
	if (zm_all_same) {
		cout << 0;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		m += b[i].gs;
	}
	if (b[1].gs > 500) {
		for (int i = 1; i <= n; i++) {
			a[i] = b[i].zm;
		}
		huiwen();
	} else {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= b[i].gs; j++) {
				ai++;
				a[ai] = b[i].zm;
				//cout << 1;
			}
		}
		huiwen1();
	}
	cout << cnt;
	return 0;
}
