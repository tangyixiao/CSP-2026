#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int n;
string a;
LL cnt, ans;

void ct() {
	cout << ans;
}

void pg() {
	for (LL i = 0; i < cnt / 2; i++) {
		if (a[i] != a[cnt - i - 1]) {
			a[cnt - i - 1] = a[i];
			ans++;
		}
	}
}

void in() {
	scanf("%d", &n);
	while (n--) {
		LL c;
		char z;
		cin >> c >> z;
		cnt += c;
		for (LL i = 0; i < c; i++) {
			a += z;
		}
	}
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	in();
	pg();
	ct();
	fclose(stdin);
	fclose(stdout);
	return 0;
}