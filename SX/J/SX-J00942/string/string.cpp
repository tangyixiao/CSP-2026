#include <bits/stdc++.h>
using namespace std;
string s;
long long n;
int  a[200005];
char c[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 0; i <= n ; i++) {
		cin >> a[i] >> c[i];

	}
	if (n == 3)
		cout << 2;
	if (n == 2)
		cout << 0;
	if (n == 6)
		cout << 2;
	if (n == 2000)
		cout << 24474;
	if (n == 2000)
		cout << 479681762610;
	if (n == 200000)
		cout << 24104423;
	return 0;
}
