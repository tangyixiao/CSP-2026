#include <bits/stdc++.h>
using namespace std;
long long a[100000000];
char s[10000], t[10000], f[10000];

int main() {
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	int n, y = 0, tnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cin >> s[i];
		for (int j = y; j < a[i]; y++) {
			t[j] = s[i];
		}
	}
	for (int i = n; i > 0; i--) {
		f[i] += t[i];
	}
	for (int i = 0; i < n; i++) {
		if (f[i] != t[i])
			tnt++;
	}
	cout << tnt;
	return 0;
}
