#include <bits/stdc++.h>
using namespace std;
string sum, sum1, sum2;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int a, b;
	char c;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		cin >> b >> c;
		for (int j = 1; j <= b; j++) {
			sum = sum + c;
		}
	}
	sum2 = sum;
	for (int k = sum.size(); k >= 1; k++) {
		sum1 = sum;
	}
	if (sum1 == sum2) {
		cout << "0";
	}
	return 0;
}
