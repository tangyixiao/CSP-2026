#include<bits/stdc++.h>
using namespace std;
int arr[500005],nxt[500005],pre[500005],f[500005],ans[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,i,t=0;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;++i)
	{
		scanf("%d",&arr[i]);
		++nxt[arr[i]];
	}
	for(i=1;i<n;++i)
	{
		pre[i]=t;
		--nxt[arr[i]];
		if(nxt[arr[i]])
			t=i;
	}
	memset(f,0x3f,sizeof(f));
	for(i=1;i<n;++i)
		ans[arr[i]]+=i-pre[i];
	ans[arr[n]]=n;
	for(i=1;i<=m;++i)
		printf("%d ",ans[i]);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
/*
4 3
1 2 1 3
*/
