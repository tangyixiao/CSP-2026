//80
#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],last[300005],nextt[500005],ans[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	memset(last,-1,sizeof(last));
	memset(nextt,-1,sizeof(nextt));
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		last[a[i]]=i;
	}
	for(int i=1;i<=n;i++)
		if(i!=last[a[i]])
			nextt[i]=last[a[i]];
	for(int i=1;i<=n;i++)
	{
		int p=i;
		ans[a[p]]++;
		while(p<=n)
		{
			if(nextt[p]!=-1)
				p=nextt[p];
			else
			{
				p++;
				if(p<=n)
					ans[a[p]]++;
			}
		}
	}
	for(int i=1;i<=m;i++)
		printf("%d ",ans[i]);
	return 0;
}
/*
RP++;
*/
