#include<bits/stdc++.h>
using namespace std;
const int N = 5e5+2;
const int M = 3e5+2;
int n,m;
int a[N]; // 原序列 
int f[M]; // 最后一个出现该点数的位置 
// f[a[i]] - 与位置i点数相同的最后一个位置 
int gt[N]; // 该位置的收取的保留次数 
int ans[M];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	scanf("%d%d",&n,&m);
	for (int i = 1; i <= n; i++) {
		scanf("%d",&a[i]);
		f[a[i]] = n+1;
	}
	for (int i = n; i >= 1; i--) {
		if (f[a[i]] == n+1) f[a[i]] = i;
		gt[i] = 1;
	}
	for (int i = 1; i <= n; i++) {
		gt[f[a[i]]+1] += gt[i];
		ans[a[i]] += gt[i];
	}
	for (int i = 1; i <= m; i++) printf("%d ",ans[i]);
	
	return 0;
}
