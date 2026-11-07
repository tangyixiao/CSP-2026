#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("string.in", "r", stdin);
	//freopen("string.out", "w", stdout);
	int a, b;
	cin >> a >> b;
	int c[a];
	for (int i = 1; i <= a; i++) {
		cin >> c[i];
	}
	cout << c[a] << " " << c[a - 1] << " " << c[a] + c[a - 1];
}