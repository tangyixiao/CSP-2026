#include<bits/stdc++.h>
using namespace std;
const int N=1000005,M=1000005;
int arr[N],card[N],pos[N],nxt[N],pre[N],ans[M];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,i,j;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
		scanf("%d",&arr[i]);
	for(i=1;i<=n;i++)
	{
		int tot=0;
		for(j=i;j<=n;j++)
			card[++tot]=arr[j];
		for(j=0;j<=n;j++)
			nxt[j]=j+1;
		for(j=1;j<=m;j++)
			pos[j]=0;
		for(j=1;j<=n;j++)
			pre[j]=j-1;
		for(j=1;j<=tot;j++)
		{
			if(pos[card[j]])
				nxt[pre[pos[card[j]]]]=j;
			pos[card[j]]=j;
		}
		for(j=0;j<=tot;j=nxt[j])
		{
			if(j==0)
				continue;
			ans[card[j]]++;
		}
	}
	for(i=1;i<=m;i++)
		printf("%d ",ans[i]);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
