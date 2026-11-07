#include<bits/stdc++.h>
using namespace std;
long long a[500005],n,m,num[500005],ans[500005],pos[500005],sz;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
	for(int i=1;i<=n;i++)
	{
		sz=0;
		for(int j=i;j<=n;j++)
		{
			if(pos[a[j]])
			{
				for(int k=sz;k>=pos[a[j]]+1;k--)pos[num[k]]=0;
				sz=pos[a[j]]-1;
			}
			num[++sz]=a[j];
			pos[a[j]]=sz;
		}
		for(int j=1;j<=sz;j++)ans[num[j]]++,pos[num[j]]=0;
	}
	for(int i=1;i<=m;i++)
	{
		printf("%lld",ans[i]);
		if(i!=m)printf(" ");
	}
	return 0;
}
//I'm too juruo to solve CSP-J T4 
//Only n^2 48 pts
//Wish my CSP-S in the afternoon to be success
//My English isn't good enough haha
//rp++ luoguid:928435