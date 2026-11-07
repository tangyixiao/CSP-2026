#include <bits/stdc++.h>
using namespace std;
long long  n, ans, chu;

struct node {
	long long a;
	char c;
} a[200005];
int s[205];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].a >> a[i].c;
		ans += a[i].a;
		s[a[i].c - '0']++;
	}
	for (int i = 0; i <= 200; i++) {
		if (s[i] != 0)
			chu++;
	}
	if (chu == 1)
		cout << 0;
	else
		cout << ceil(ans * 1.0 / chu * 1.0);
	return 0;
}