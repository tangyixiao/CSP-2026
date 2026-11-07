#include<bits/stdc++.h>
using namespace std;
int fa[500005],num[500005],book[500005],cnt=1;
int n,m;
int find(int fd)
{
	if(fa[fd]==0) return fd;
	find(fa[fd]);
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>num[i];
	
	for(int i=1;i<=n;i++)
	{
		int vis=i+1;
		while(vis<=n)
		{
			if(num[vis]==num[i])
			{
				fa[i]=vis;
				break;
			}
			vis++;
		}
	}
	
	
	for(int i=1;i<=n;i++)
	{
		int l=i,r=n;
		while(l<r)
		{
			int ed=find(l);
			l=ed+1;
			book[num[ed]]++;
		}
	}
	
	book[num[n]]=n;
	for(int i=1;i<=m;i++)
	{
		cout<<book[i]<<" ";
	}
	return 0;
}
