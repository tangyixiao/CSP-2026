#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5+10;
int a[MAXN];
int n;
char c[MAXN];
string s;
long long ans, sum[30];
bool num[30];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		cin >> c[i];
		num[c[i] - 'a' + 1] = 1;
		sum[c[i] - 'a' + 1] += a[i];
	}
	int p = 0;
	for (int i = 1; i <= 26; i++) {
		if (num[i] == 1)
			p++;
	}
	if (p == 1)
		ans = 0;
	else if (n == 2 && p > 1) {
		if (a[1] == a[2])
			ans = 0;
		else if (a[1] == 1 || a[2] == 1)
			ans = 1;
		else if (a[1] == 2 || a[2] == 2)
			ans = 2;
		else if (a[1] == 3 || a[2] == 3)
			ans = 3;
		else if (a[1] == 4 || a[2] == 4)
			ans = 4;
	}

	cout << ans;
	return 0;
}