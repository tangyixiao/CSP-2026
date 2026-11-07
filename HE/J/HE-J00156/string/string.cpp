#include <bits/stdc++.h>
using namespace std;

int n, x, l;
char s[100000010], ch, t;
long long ans = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
//	printf("%d\n", sizeof(ch));
//	printf("%d\n\n", sizeof(s));

	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d%c%c", &x, &t, &ch);
		for (int j = 1; j <= x; j++)
			s[++l] = ch; 
	}
	
	for (int i = 1, j = l; i < j; i++, j--) {
		if (s[i] != s[j]) {
			++ans;
		}
	}
	printf("%lld\n", ans);
	return 0; 
}
