#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],b[500010],sg[300010][2],ans[300010];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			sg[j][0]=0;
		}
		int t=n;
		for(int v=i,j=i;j<=t;v++,j++)
		{
			b[j]=a[v];
			sg[b[j]][0]++;
			if(sg[b[j]][0]==2)
			{
				for(int c=sg[b[j]][1];c<j;c++)
				{
					sg[b[c]][0]--;
				}
				sg[b[j]][0]=1;
				t=t-j;
				j=sg[b[j]][1];
				t=j+t;
			}
			sg[b[j]][1]=j;
			
		}
		for(int j=i;j<=t;j++)
		{
			ans[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<' ';
	}
}