#include <bits/stdc++.h>
using namespace std;
long long n, sum = 0, a, num1 = 0, num2 = 1;
string b;
char c[199990000];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	while (n--) {
		cin >> a >> b;
		num1 += a;
		for (int i = num2; i <= num1; i++) {
			c[i] = b[0];
		}
		num2 += a;
	}
	for (int i = 1; i <= num1 / 2; i++) {
		if (c[i] != c[num1 - i + 1])
			sum++;
	}
	cout << sum;
	return 0;
}
