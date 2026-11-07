#include <bits/stdc++.h>
using namespace std;
string s, c;
long long n, a;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (long long i = 0; i < n; i++) {
		cin >> a >> c ;
		s[i] = a * c[i];
	}


	return 0;
}
