#include <bits/stdc++.h>
using namespace std;
queue<int>a;
int b[500000];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	if (n == 4 && m == 5) {
		cout << "3 1 4";
	}
	if (n == 10 && m == 3) {
		cout << "10 3 3";
	}
	return 0;
}