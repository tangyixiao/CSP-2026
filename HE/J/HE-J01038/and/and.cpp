#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

const int N = 2e5 + 4;
LL a[N];
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n, m;
	long long maxn = 0;
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) scanf("%lld", &a[i]);
	
	if(m==2){
		for (int i = 1; i <= n; i++) {
			for (int j = i+1; j <= n; j++) {
				long long x = a[i] & a[j];
				maxn = max(x,maxn);
			}
		}
		printf("%lld",maxn);
		return 0;
	}
	if (m==1) {
		for (int i = 1; i<=n;i++){
			maxn=max(maxn,a[i]);
		}
		printf("%lld",maxn);
		return 0;
	}
	return 0;
}
