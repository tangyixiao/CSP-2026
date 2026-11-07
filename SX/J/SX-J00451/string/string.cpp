#include <bits/stdc++.h>
using namespace std;
int n, a;
string c;
string b1[5000000005];
string b2[5000000005];
int sum;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> c;
		for (int j = i; j <= n * a; j++) {
			b1[j] = c;
		}
	}
	for (int i = n * a; i > 0; i--) {
		b2[i] = b1[i];
	}
	for (int i = 0; i < n; i++) {
		if (b2[i] == b1[i]) {
			sum++;
		}
	}
	cout << sum;
	return 0;
}
