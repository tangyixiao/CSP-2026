#include <bits/stdc++.h>
using namespace std;
int n,a[200005];
char c[200005];
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &n);
	for (int i = 1;i <= n;i++){
		scanf("%d", &a[i]);
		cin>>c[i];
	}
	long long ans = 0;
	int p1 = 1,p2 = n;
	while (p1 < p2){
		int x = min(a[p1],a[p2]);
		if (c[p1] != c[p2]) ans += x;
		a[p1] -= x;a[p2] -= x;
		if (!a[p1]) p1++;
		if (!a[p2]) p2--;
	}
	printf("%lld", ans);
	return 0;
}
