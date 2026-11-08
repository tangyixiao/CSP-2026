#include<bits/stdc++.h>
using namespace std;
long long n, r, n1, su, sum;
int a[20010];
char c[20010], c1[20010];
long long gcd(long long a, long long b) {
	if(a%b==0) return b;
	return gcd(b, a%b);
}
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d",&n);
	for(long long i = 1; i <= n; i++) {
		scanf("%d %c", &a[i], &c[i]);
		if(i==1) {
			r = a[1];
			su = a[1];
		} else {
			r = gcd(r, a[i]);
			su+=a[i];
		}
	}
	n1 = su / r;
	int sd = r, kl = 1;
	for(long long i = 1; i <= n1; i++) {
		c1[i] = c[kl];
		sd+=r;
		if(sd > a[kl]) {
			kl++;
			sd = r;
		}
	}
	for(long long i = 1; i <= n1 / 2; i++) {
		if(c1[i] != c1[n1-i+1]) sum++;
	}
	printf("%lld\n",(long long)r * sum);
	return 0;
}
