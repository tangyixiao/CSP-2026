#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+2;
int n;
long long a[N],al=0;
char c[N];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	scanf("%d",&n);
	for (int i = 0; i < n; i++) scanf("%lld %c",&a[i],&c[i]);
	if (n == 1) printf("0");
	else {
		int l = 0;
		int r = n-1;
		long long lt = a[l];
		long long rt = a[r];
		long long cat = 0;
		while (l < r) {
			cat = min(lt,rt);
			lt -= cat;
			rt -= cat;
			if (c[l] != c[r]) al += cat;
			if (lt == 0) {
				l++;
				lt = a[l];
			}
			if (rt == 0) {
				r--;
				rt = a[r];
			}
		}
		printf("%lld",al);
	}
	
	return 0;
}
