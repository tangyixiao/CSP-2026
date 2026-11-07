#include<bits/stdc++.h>
using namespace std;
int n,m,a[300010],cnt[300010];
stack<int>q;
bool st[300010];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int k=1;k<=n;k++)
	{
		memset(st,false,sizeof(st));
		for(int i=k;i<=n;i++)
		{
			if(a[i]>m)continue;
			if(st[a[i]]==true)
			{
				while(q.size()&&q.top()!=a[i])
				{
					st[q.top()]=false; 
					q.pop();	
				}
				if(q.size())q.pop();
				q.push(a[i]);
			}
			else
			{
				st[a[i]]=true;
				q.push(a[i]);
			}
		}
		//结束
		while(q.size())
		{
			if(q.top()<=m)cnt[q.top()]++;
			q.pop();
		}
	}
	for(int i=1;i<=m;i++)
	{
		printf("%d ",cnt[i]);
	}
	return 0;
}