#include <bits/stdc++.h>
using namespace std;
long long r, a, mm;


int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> r >> a;
	for (int i = 1; i <= a; i++) {
		int al;
		cin >> al;
		if (al >= mm)
			mm = al;
	}
	cout << mm;
	return 0;
}
