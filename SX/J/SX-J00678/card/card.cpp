#include <bits/stdc++.h>
using namespace std;
int a[100000000];
int n;
int b;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> b;
		a[n] = b;
	}
	return 0;
}
