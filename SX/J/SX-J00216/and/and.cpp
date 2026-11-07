#include <bits/stdc++.h>
using namespace std;

long long a[999999];

int main() {
//	freopen("string.in", "r", stdin);
//	freopen("string.out", "w", stdout);
	long long n, sum = 0;
	int nb = 0;
	cin >> n;
	char s;
	string mon;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		cin >> s;
		for (int j = nb; j <= nb + a[i]; j++) {
			mon[j] = s;
			nb += a[i];
		}
	}
	cout << mon << endl;
	for (int i = 0; i < mon.size(); i++) {
		for (int j = mon.size(); j >= 0; j--) {
			if (i == j)
				break;
			if (mon[i] != mon[j]) {
				sum += a[j];
			}
		}
	}
	cout << sum;
	return 0;
}
