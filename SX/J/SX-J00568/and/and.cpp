#include <bits/stdc++.h>
using namespace std;
int n,m,a[200005];
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1;i <= n;i++)
		scanf("%d", &a[i]);
	int ans = 0;
	for (int i = 29;i >= 0;i--){
		int cnt = 0;
		for (int j = 1;j <= n;j++)
			cnt += ((a[j] & ans) == ans && ((a[j] >> i) & 1));
		if (cnt >= m) ans += (1 << i);
	}
	printf("%d", ans);
	return 0;
}
//01trie???!!!
