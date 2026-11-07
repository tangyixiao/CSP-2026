#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int a[N],ans[N],dm[N],xyg[N],zjw[N],gs[N],ys[N];//不管了，开最大的总没错
vector<int> v[N];
void dfs(int x)
{
	for(int i=0;i<v[x].size();i++)
	{
		dfs(v[x][i]);
		gs[x]+=gs[v[x][i]];
	}
	ans[ys[x]]+=gs[x];
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	int cnt=0;
	for(int i=n;i>=1;i--)
	{
		xyg[i]=zjw[a[i]];
		zjw[a[i]]=i;
		if(xyg[i])
		{
			dm[i]=dm[xyg[i]];
			gs[dm[i]]++;
		}
		else
		{
			dm[i]=++cnt;
			v[dm[i+1]].push_back(dm[i]);
			gs[dm[i]]=1;
		}
		ys[dm[i]]=a[i];
		//printf("dm[%d]=%d:gs%d\n",i,dm[i],gs[dm[i]]);
	}
	dfs(1);
	for(int i=1;i<=m;i++)
	{
		printf("%d ",ans[i]);
	}
	printf("\n");
	return 0;
}
/*
思路完全错了！
显然是回退到自己最近的那一个同色点！
只有在前面没有同类时才在之前的基础上前进一步！
所以我们需要维护前面的同色点！
前进一步还是老样子，可以通过树结构解决
但是，我们需要记录每个位置的点叫什么
*/