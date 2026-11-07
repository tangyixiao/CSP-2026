
#include <bits/stdc++.h>
using namespace std;
long long int a[1000000], b, c, lt;
string s, d ;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> b >> c;
	for (int i = 1; i <= b; i++) {
		cin >> a[i];
		if (a[i] > lt)
			lt = a[i];
	}
	if (c == 1) {
		cout << lt;
		return 0;
	}
	lt = 0;
	for (int i = 1; i <= b; i++) {
		for (int j = 1; j <= b; j++) {
			if (a[i]&a[j] > lt)
				lt = a[i] & a[j];
		}
	}
	cout << lt;
	return 0;
}
