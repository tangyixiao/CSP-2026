#include<bits/stdc++.h>
using namespace std;
int sta[500005],hd,num[300005],p[500005];
int n,m,ans[500005];
int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>p[i];
	for(int j=1;j<=n;j++)
	{
		memset(num,0,sizeof(num));
		memset(sta,0,sizeof(sta));
		for(int i=j;i<=n;i++)
		{
			int q=p[i];
			if(num[q]==1)
			{
				while(sta[hd]==q)
				{
					num[sta[--hd]]--;
				}
			}
			num[q]++;
			sta[++hd]=q;
		}
		for(int i=1;i<=m;i++)
		{
			if(num[i]>0)
				ans[i]++;
		}
	}
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<" ";
    return 0;
}
