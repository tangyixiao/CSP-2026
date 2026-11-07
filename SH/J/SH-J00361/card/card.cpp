#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],lst[300010],ans[300010];
void bs()
{
	for(int i=n;i>=1;i--)
	{
		if(!lst[a[i]]) lst[a[i]]=i;
	}
	for(int j=1;j<=n;j++)
	{
		for(int i=j;i<=n;)
		{
			ans[a[i]]++;
			i=lst[a[i]]+1;
		}
	}
	for(int i=1;i<m;i++) printf("%d ",ans[i]);
	printf("%d",ans[m]);
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	bs();
	return 0;
}
