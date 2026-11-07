#include <bits/stdc++.h>
using namespace std;

int n, m, a[500010], ans[300010], con[300010], num[300010], nex[500010], top[300010], f[500010];

void solve1 (){
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++)
			num[j] = 0;
		for (int j = i; j <= n; j++){
			num[a[j]] = 1;
			if (nex[j] != 0){
				j = nex[j] - 1;
			}
		}
		for (int j = 1; j <= m; j++)
			ans[j] += num[j]; 
	} 
}

void solve2 (){
	int mi = n;
	for (int i = 1; i <= m; i++)
		con[i] = n;
	for (int i = n; i >= 1; i--){
		ans[a[i]] += (min (con[a[i]], i) - mi);
//		ans[a[i]] += (i - mi - max (i - con[a[i]], 0));
//		ans[a[i]] += (i - mi);
		con[a[i]] = mi;
		mi = min (mi, f[i]);
	}
}

int main(){
	freopen ("card.in", "r", stdin);
	freopen ("card.out", "w", stdout);
	scanf ("%d%d", &n, &m);
	for (int i = 1; i <= n; i++){
		scanf ("%d", &a[i]);
		f[i] = top[a[i]];
		if (top[a[i]]){
			nex[top[a[i]]] = i;
		}
		top[a[i]] = i;
	}
	if (n <= 5000 && m <= 3000)
		solve1 ();
	else
		solve2 ();
	for (int i = 1; i <= m; i++)
		printf ("%d ", ans[i]);
	return 0;
}