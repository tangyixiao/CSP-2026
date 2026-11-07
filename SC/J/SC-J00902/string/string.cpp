#include <bits/stdc++.h>
using namespace std;

int n;
long long a[200010], ans;
char c[200010];

int main(){
	freopen ("string.in", "r", stdin);
	freopen ("string.out", "w", stdout); 
	scanf ("%d", &n);
	for (int i = 1; i <= n; i++){
		scanf ("%lld %c", &a[i], &c[i]); 
	}
	int l = 1, r = n;
	long long x = a[1], y = a[n];
	while (l < r){
		long long v = 1;
		if (c[l] == c[r])
			v = 0;
		if (x < y){
			y -= x;
			ans += x * v;
			x = a[++l];
		}else if (x > y){
			x -= y;
			ans += y * v;
			y = a[--r];
		}else if (x == y){
			ans += x * v;
			x = a[++l];
			y = a[--r];
		}
	}
	printf ("%lld", ans);
	return 0;
}