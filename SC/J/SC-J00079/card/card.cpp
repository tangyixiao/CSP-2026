#include<bits/stdc++.h>
using namespace std;
int a[500005],ans[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	scanf("%d %d",&n,&m);
	for (int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		ans[a[i]]=i;
	}
	for (int i=1;i<=m;i++)
	{
		printf("%d ",ans[i]);
	}
	return 0;
}