#include<bits/stdc++.h>
#define N 500005
//#define int long long
#define endl '\n'
using namespace std;

int n,m,a[N],lst[N],ans[N],siz[N];
vector<int> e[N];

void dfs(int u){
	siz[u]=1;
	for(int v:e[u]){
		dfs(v);
		siz[u]+=siz[v];
	}
	ans[a[u]]+=siz[u];
}

signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
//	freopen("card.in","r",stdin);
//	freopen("card_my.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=n;i>=1;i--){
		if(!lst[a[i]]) lst[a[i]]=i;
		int r=lst[a[i]]+1;
		e[r].push_back(i);
	}
	dfs(n+1);
	for(int i=1;i<=m;i++){
		printf("%d ",ans[i]);
	}
	return 0;
}//知颖你太美