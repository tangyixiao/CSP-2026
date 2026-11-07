#include <bits/stdc++.h>
using namespace std;
long long a, b, n;
char k;
string ax, ay;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	cin >> a >> b;
	if (a < b)
		cout << a;
	else
		cout << b;
	return 0;
}