#include <iostream>
using namespace std;
int n, m, a;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int num = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a;
			num += i;
		}
		cout << endl;
	}
	return 0;
}
