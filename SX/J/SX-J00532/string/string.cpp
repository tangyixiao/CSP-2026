#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("string.in", "r", stdin);
	//freopen("string.out", "w", stdout);
	long long n;
	char ci;
	cin >> n >> ci;
	if (ci * n != n * ci) {
		ci, n = n, ci;
		cout << ci*n;
	}
	return 0;
}