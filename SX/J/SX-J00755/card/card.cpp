#include <bits/stdc++.h>
using namespace std;
map<int, int> Maps;
int n, m, number[500001], sum;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> number[i];
		Maps[number[i]] = i;
	}
	for (int i = 1; i <= m; i++) {
		if (Maps[i] != 0) {
			cout << Maps[i] << ' ';
		}
	}
	return 0;
}
//16
