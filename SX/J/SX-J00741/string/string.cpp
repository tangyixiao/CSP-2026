#include <bits/stdc++.h>
using namespace std;
char c;
string d;
long long a, b[200005], e;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> a;
	for (int i = 1; i <= a; i++) {
		cin >> b[i];
		cin >> c;
	}
	for (int i = (a + 1) / 2; i <= a; i++) {
		e += b[i];
	}
	cout << e;
	return 0;
}