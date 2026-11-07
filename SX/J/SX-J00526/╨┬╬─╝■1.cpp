#include <bits/stdc++.h>
using namespace std;
long long a, b, sum;
string b1, b2;
char bip;

int main() {
	//ios::sync_with
	cin >> a;
	while (a--) {
		cin >> b1 >> bip;
		for (long long i = 1; i <= b; i++) {
			b1 += bip;
		}

	}
	b2 = b1;
	reverse(b1.begin(), b2.end());
	int len = b2.length();
	//if (b1 == b2) {
	//cout << 0;
	//return 0;
	//}
	if (b1 == b2) {
		cout << 0;
		return 0;
	} else {
		if (len % 1 == 0) {
			for (int i = len / 2, j = len / 2; j <= len; i++) {
				if (b2[i] != b2[j]) {
					sum++;
				}
			}
		} else {
			for (int j = len / 2, i = len / 2; j <= len; j++, i--) {
				if (b2[i] != b2[j]) {
					sum++;
				}
			}
		}
	}
	cout << sum;
	return 0;
}
