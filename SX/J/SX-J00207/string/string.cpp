#include <bits/stdc++.h>
using namespace std;
int aa[1000000];
char bb[1000000];
int sum = 0, ssum = 0;
int jw[10];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> aa[i] >> bb[i];
	}
	int s = a - 1, l = 0;
	while (s != l) {
		if (aa[s] > aa[l]) {
			if (bb[s] != bb[l]) {
				sum += aa[l] % 100000000;
				ssum += aa[l] / 100000000;
			}
			aa[s] -= aa[l];
			l++;
		} else if (aa[s] < aa[l]) {
			if (bb[s] != bb[l]) {
				sum += aa[s] % 100000000;
				ssum += aa[s] / 100000000;
			}
			aa[l] -= aa[s];
			s--;
		} else {
			if (bb[s] != bb[l]) {
				sum += aa[s] % 100000000;
				ssum += aa[s] / 100000000;
			}
			s--;
			l++;
			if (s < l) {
				s = l;
			}
		}
	}
	if (sum >= 99999999) {
		ssum += sum / 100000000;
		sum %= 100000000;
	}

	if (ssum == 0) {
		cout << sum;
	} else {
		cout << ssum;
		for (int i = 1; i <= 8; i++) {
			jw[i] = sum % 10;
			sum  = sum / 10;
		}
		for (int i = 8; i >= 1; i--) {
			if (jw[i] != 0) {
				cout << jw[i];
			} else {
				cout << "0";
			}
		}
	}
	return 0;
}
