#include <bits/stdc++.h>
using namespace std;
int main () {
	freopen("string.in", "r", stdin)
	freopen("string.out", "w", stdout)
	int n;
	int a[10000000];
	cin >> n;
	for (int i = 1; i <= 2 * n; i++)
	cin >> a[i];
	if (a[2] == a[2 * n]){
		cout << 0;
		return 0;
	}
	else {
		cout << 1;
		return 0;
	}
	return 0;
}
