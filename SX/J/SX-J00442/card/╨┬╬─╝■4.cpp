#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("card.in", "r", stdin);
	//freopen("card.out", "w", stdout);
	int a, b, u;
	cin >> a >> b;
	int c[a + 1], sum[b + 1];
	memset(sum, 0, sizeof(sum));
	for (int i = 1; i <= a; i++) {
		cin >> c[i];
		if (i == a) {
			sum[c[i]] = a;
			u = c[i];
		}
	}
	for (int i = 1; i <= a; i++) {
		if (i != 1) {
			for (int j = 1; j <= i; j++) {
				if (c[j] == c[j + 1])
					c[j] = 0;
			}
		}
	}
	for (int i = 1; i <= a; i++) {
		if (c[i] == u)
			continue;
		if (c[i] != 0)
			sum[c[i]]++;
		else
			continue;
	}
	for (int i = 1; i <= b; i++)
		cout << sum[i] << " ";
	return 0;
}
