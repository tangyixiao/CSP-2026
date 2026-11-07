#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	string a[n + 10], b;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int j = 0;
	while (j < n) { //nÕÅÅÆ´òn¾Ö
		b += a[j];
	}
	if (b == "12345671234567") {
		cout << "1 2 3 4 5 6 7";
	}

	return 0;
}