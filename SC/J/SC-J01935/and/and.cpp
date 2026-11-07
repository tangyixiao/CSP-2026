#include <bits/stdc++.h>
using namespace std;

int n,m,maxn = -1,maxx = -1,a[200001],b[200001];

void dfs(int x,int p){
	if(p > m){
		int ans = b[1];
		for(int i = 1;i < p;i++){
			ans = b[i] & ans;
		}
		maxx = max(maxx,ans);
		return;
	}
	for(int i = x + 1;i <= n - (m - p);i++){
		b[p] = a[i];
		dfs(i,p + 1);
	}
	return;
}

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d",&n,&m);
	for(int i =1 ;i <= n;i++){
		scanf("%d",&a[i]);
		maxn = max(maxn,a[i]);
	}
	if(n == 1){
		printf("%d",maxn);
		return 0;
	}
	dfs(0,1);
	printf("%d",maxx);
	return 0;
}