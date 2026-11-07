#include <bits/stdc++.h>
using namespace std;

struct node {
	long long a;
	char c;
} s[200005];
int n;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &n) ;
	for (int i = 1; i <= n; i++) {
		scanf("%lld %s", &s[i].a, &s[i].c) ;
	}
	int top1 = 0, top2 = n;
	long long ans = 0;
	while (top1 < top2) {
		if (s[top1].a == s[top2].a) {
			if (s[top1].c == s[top2].c) {
				s[top1].a = 0;
				s[top2].a = 0;
				top1++;
				top2--;
			} else {
				ans += s[top2].a;
				s[top1].a = 0;
				s[top2].a = 0;
				top1++;
				top2--;
			}
		} else if (s[top1].a > s[top2].a) {
			if (s[top1].c == s[top2].c) {
				s[top1].a -= s[top2].a;
				s[top2].a = 0;
				top2--;
			} else {
				ans += s[top2].a;
				s[top1].a -= s[top2].a;
				s[top2].a = 0;
				top2--;
			}
		} else if (s[top1].a < s[top2].a) {
			if (s[top1].c == s[top2].c) {
				s[top2].a -= s[top1].a;
				s[top1].a = 0;
				top1++;
			} else {
				ans += s[top1].a;
				s[top2].a -= s[top1].a;
				s[top1].a = 0;
				top1++;
			}
		}
	}
	cout << ans;
	return 0;
}
