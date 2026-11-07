#include <bits/stdc++.h>
using namespace std;

int main() {
	preopen("and.in","r",stdin);
	preopen("and.out","w",stdout);
	int n, m, a[1000000], h = -50;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cout << a[i];
	for (int i = 1; i <= n; i++)
		for (int j = 2; j <= n - 1; j++)
			if (a[i] and a[j] > h)
				h = a[i] and a[j];
	cout << h;
	return 0;
}