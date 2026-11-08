#include<bits/stdc++.h>
using namespace std;
int n,m,a[500001],cnt[300001],v[300001];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	for(int i=1;i<=n;i++)
	{
		stack<int>p;
		memset(v,0,sizeof v);
		for(int j=i;j<=n;j++)
		{
			if(!v[a[j]]) p.push(a[j]),v[a[j]]=1;
			else while(p.top()!=a[j]&&!p.empty()) v[p.top()]=0,p.pop();
		}
		for(int j=1;j<=m;j++) if(v[j]) cnt[j]++;
	}
	for(int i=1;i<=m;i++) printf("%d ",cnt[i]);
	return 0;
}
/*
4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1

:(
*/
