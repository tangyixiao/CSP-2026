#include <iostream>
using namespace std;
string  s[10000005], d;
int a, c=0, n, o;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> a ;
	for (int i = 1; i <= a; i++) {
		cin >> n >> d;
		if (a == 1) {
			cout << 0;
			break;
		}
		for (int j = c; j <= n; j++) {
			s[j] = d;
		}
		c+=n;
	}
	if(s[1]!=s[c]) o++;

	cout << o;
	return 0;
}
