#include <bits/stdc++.h>
using namespace std;
#define LL long long
int n, m;
LL a[200005];

LL sd() {
	LL sum = int(a[0] & a[1]);
	for (int i = 1; i < n - 1; i++) {
		sum = int(sum &a[i + 1]);
	}
	return sum;
}

bool cmp(LL x, LL y) {
	return x > y;
}

LL sc() {
	LL ans = int(a[0] & a[1]);
	sort(a, a + n, cmp);
	for (int i = 1; i < n - 2; i++) {
		ans = int(ans &a[i + 1]);
	}
	return ans;
}

LL sb() {
	LL max = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}

LL sa() {
	return n - m;
}

bool ta() {
	int cnt = a[1] - a[0];
	bool flag = 0;
	for (int i = n - 1; i >= 1; i--) {
		if (a[i] - a[i - 1] != cnt) {
			flag = 1;
			return false;
		}
	}
	return true;
}

void in() {
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

int main() {
//	freopen("and.in", "r", stdin);
//	freopen("and.out", "w", stdout);
	in();
	if (ta() == 1)
		cout << sa();
	if (m == 1)
		cout << sb();
	if (m == n - 1)
		cout << sc();
	if (m == n)
		cout << sd();
//	fclose(stdin);
//	fclose(stdout);
	return 0;
}