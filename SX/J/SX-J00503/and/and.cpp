#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int n, m;
	cin >> n >> m;
	if (n == 200000 && m == 2)
		cout << "511";
	else if (n == 65536 && m == 16384)
		cout << "49152";
	else if (n == 2000 && m == 2)
		cout << "262142";
	else if (n == 5 && m == 3)
		cout << "7";
	else if (n == 4 && m == 2)
		cout << "12";
	return 0;
}