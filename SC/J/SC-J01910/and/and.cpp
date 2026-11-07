#include<bits/stdc++.h>
using namespace std;
const int maxn = 200005;
int n, m;
int a[maxn];

int ans = 0;
void dfs(int i, int cnt, int s){
	if(cnt == m)ans = max(ans, s);
	for(int j = i+1; j <= n; ++j)
	{
		dfs(j, cnt+1, s&a[j]);
	}
}

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);	
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; ++i)
	{
		scanf("%d", &a[i]); 
	}
	for(int i = 1; i <= n; ++i)
	{
		dfs(i, 1, a[i]);
	}
	printf("%d", ans);
	return 0;
}