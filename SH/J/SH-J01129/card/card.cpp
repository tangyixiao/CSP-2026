#include<bits/stdc++.h>
using namespace std;
int a[500005],b[500005],ans[300005];
int v[300005];
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n,m;
	scanf("%d%d", &n ,&m);
	for(int i=1;i<=n;i++)scanf("%d", &a[i]);
	for(int i=1;i<=n;i++)
	{
		int k=1;
		for(int j=i;j<=n;j++)
		{
			b[k]=a[j];
			for(int w=n;w>=j+1;w--)
				if(a[j]==a[w])
				{
					j=w;
					break;
				}
			b[k]=a[j];
			k++;
		}
		
//		for(int j=1;j<=k-1;j++)printf("%d ", b[j]);
//		printf("\n");
		
		memset(v,1,sizeof(v));
		for(int j=1;j<=k-1;j++)
			if(v[b[j]])
			{
				ans[b[j]]++;
				v[b[j]]=0;
			}
		
//		for(int j=1;j<=m;j++)printf("%d ", v[j]);
//		printf("\n\n");
	}
	for(int i=1;i<=m;i++)printf("%d ", ans[i]);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
