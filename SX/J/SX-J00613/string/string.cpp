
#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	string a;
	cin >> n ;
	for (int i = 1; i <= 2 * n; i++)
		cin >> a[i];
	for (int i = 1; i <= 2 * n; i++) {
		if (a[i / 2] == a[i / 4])
			cout << "0";
	}


	return 0;
}
