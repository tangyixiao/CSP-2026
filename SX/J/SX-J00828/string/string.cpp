#include <bits/stdc++.h>
using namespace std;
int n,  cnt1 = 1, cnt2;
long long cur, cnt = 0;
char curstr;

struct useful {
	long long st;
	char dt;
};
useful a[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &cur);
		cin >> curstr;
		a[i].st = cur;
		a[i].dt = curstr;
	}
	cnt2 = n;
	while (cnt1 < cnt2)
		if (a[cnt1].dt != a[cnt2].dt) {
			if (a[cnt1].st > a[cnt2].st) {
				a[cnt1].st = a[cnt1].st - a[cnt2].st;
				cnt += a[cnt2].st;
				cnt2--;
			} else if (a[cnt1].st == a[cnt2].st) {
				cnt += a[cnt2].st;
				cnt1++;
				cnt2--;
			} else {
				a[cnt2].st = a[cnt2].st - a[cnt1].st;
				cnt += a[cnt1].st;
				cnt1++;
			}
		} else {
			if (a[cnt1].st > a[cnt2].st) {
				a[cnt1].st = a[cnt1].st - a[cnt2].st;
				cnt2--;
			} else if (a[cnt1].st == a[cnt2].st) {
				cnt1++;
				cnt2--;
			} else {
				a[cnt2].st = a[cnt2].st - a[cnt1].st;
				cnt1++;
			}
		}
	printf("%lld", cnt);
	return 0;
}

