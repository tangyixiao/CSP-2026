#include <bits/stdc++.h>
using namespace std;
freopen("string.in", "r", stdin);
freopen("string.out", "w", stdout);
string ans, b;
long long n, gai, bu = 1;
long long num[100004];
char zifu[100004];

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> num[i];
		cin >> zifu[i];
	}
	while (true) {
		if (bu == n) {
			cout << gai;
			return 0;
		} else if (num[bu] > num[n]) {
			num[bu] -= num[n];
			if (zifu[bu] != zifu[n])
				gai += num[n];
			n--;

		} else if (num[bu] <= num[n]) {
			num[n] -= num[bu];
			if (zifu[bu] != zifu[n])
				gai += num[bu];
			bu++;
		}
	}
	return 0;
}

