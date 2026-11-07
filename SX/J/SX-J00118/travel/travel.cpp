#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, m;
	double y, n;
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> x >> y >> m >> n;
	if (x != m) {
		cout << "0000";

	} else if (x == m) {
		cout << "1111";
	}

	return 0;
}


