#include<bits/stdc++.h>
using namespace std;
const int N=500005;
const int M=300005;
int n,m;
int f[N][19],pre[N],arr[N];
vector<int> vec[M];
int ans[M];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int i,j,x,t;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;++i)
	{
		scanf("%d",&arr[i]);
		if(vec[arr[i]].size()>0)
			f[vec[arr[i]][vec[arr[i]].size()-1]][0]=i;
		vec[arr[i]].push_back(i);
	}
	for(i=1;i<=n;++i)
	{
		t=log2(vec[arr[i]].size());
		for(j=1;j<=t;++j)
		{
			f[i][j]=f[f[i][j-1]][j-1];
			//printf("----%d %d %d\n",i,j,f[i][j]);
		}
	}
	for(i=1;i<=n;++i)
	{
		x=i;
		while(x<=n)
		{
			t=log2(n-x+1);
			for(j=t;j>=0;--j)
			{
				if(f[x][j]<=n&&f[x][j]!=0)
				{
					x=f[x][j];
				}
			}
			//printf("%d ",x);
			++ans[arr[x++]];
		}
		//printf("\n");
	}
	for(i=1;i<=m;++i)
	{
		printf("%d ",ans[i]);
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
