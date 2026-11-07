#include<bits/stdc++.h>
using namespace std;

int n, l, r;
int a[200010];
long long ans;
char s[200010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d %c", &a[i], &s[i]);
	int i = 1, j = n;
	while (i < j) {
		if (l > 0) {
			if (l > a[j]) {
				if (s[i] != s[j])
					ans += a[j];
				l -= a[j];
				j--;
			} else if (l < a[j]) {
				if (s[i] != s[j])
					ans += l;
				r = a[j] - l, l = 0;
				i++;
			} else {
				if (s[i] != s[j])
					ans += l;
				l = r = 0;
				i++, j--;
			}
		} else if (r > 0) {
			if (r > a[i]) {
				if (s[i] != s[j])
					ans += a[i];
				r -= a[i];
				i++;
			} else if (r < a[i]) {
				if (s[i] != s[j])
					ans += r;
				l = a[i] - r, r = 0;
				j--;
			} else {
				if (s[i] != s[j])
					ans += r;
				l = r = 0;
				i++, j--;
			}
		} else {
			if (a[i] > a[j]) {
				if (s[i] != s[j])
					ans += a[j];
				l = a[i] - a[j];
				j--;
			} else if (a[i] < a[j]) {
				if (s[i] != s[j])
					ans += a[i];
				r = a[j] - a[i];
				i++;
			} else {
				if (s[i] != s[j])
					ans += a[i];
				i++, j--;
			}
		}
	}
	printf("%lld\n", ans);
	return 0;
}
/*
             //\\    ///////
            // \\   //
           //  \\  //
          //   \\  \\
         //----\\   \\
        //     \\    \\
       //      \\     \\\\\\\\
*/
