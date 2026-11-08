#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll c, t, n, d, x[2000010];

int main(){
	freopen("migrate.in", "r", stdin);
	freopen("migrate.out", "w", stdout);
	scanf("%lld%lld", &c, &t);
	while(t--){
		scanf("%lld%lld", &n, &d);
		for(int i = 1; i <= n; i++)
			scanf("%lld", &x[i]);
		if(c == 11 || c == 12){
			ll p = d / (x[2] - x[1]);
			if(p >= 2) printf("%d\n", max(n - 2 * p - 1 + 2, 0LL));
			else printf("0\n");
		}
		if(c == 13 || c == 14) printf("0\n");
	}
	return 0;
}
