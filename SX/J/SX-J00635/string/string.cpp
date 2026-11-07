#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
int a[200005];
char c[200005];
int n;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	for (int i = 1; i <= n; i++) {
		if (c[i] == c[n + 1 - i]) {
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}