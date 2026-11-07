#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],tong[300010],vis[300010];
stack<int> s;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			if(vis[a[j]])
			{
				int t=s.top();
				while(t!=a[j])
				{
					t=s.top();
					s.pop();
					vis[t]--;
				}
			}
			s.push(a[j]);
			vis[a[j]]++;
		}
		for(int j=1;j<=m;j++)
		{
			if(vis[j])
				tong[j]++;
			vis[j]=0;
		}
	}
	for(int i=1;i<=m;i++)
	{
		printf("%d ",tong[i]);
	}
	return 0;
}//6767