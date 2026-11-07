#include <iostream>
using namespace std;
string  s[10000005], d;
int a, c, n, o;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> a >> c ;
	for (int i = 1; i <= a; i++) {
		cin >> n;
		if (a == 1) {
			cout << 0;
			break;
		}
		for (int j = c; j <= n; j++) {
			s[j] = d;
		}
	}
	o = 0;
	for (int i = 1; i <= a; i++) {
		o = 9;
		cout << o;
	}

	return 0;
}