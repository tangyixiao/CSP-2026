#include <bits/stdc++.h>
using namespace std;
string a, b;
long long sum;
int n, ai, xx, num;
char ci;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> ai >> ci;
		for (int j = sum + 1; j <= sum + ai; j++) {
			a[j] = ci;
		}
		sum += ai;
	}
	num = sum;
	for (int i = 1; i <= sum; i++) {
		b[num] = a[i];
		num--;

	}
	for (int i = 1; i <= sum; i++) {
		if (a[i] == b[i]) {

		} else {
			xx++;
		}
	}
	cout << xx / 2;
	return 0;
}
