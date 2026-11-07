#include <iostream>
using namespace std ;
int a[50010] , b[30010]; 
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1 ;i<=n;i++)
	{
		int d[30010],a1=1;
		for (int j=i;j<=n;j++)
		{
			if(d[a[j]]==0)
			{
				d[a[j]]=a1;
			}
			else
			{
				for(int x=1;x<=m;x++)
				{
					if(d[x]>d[a[j]])
					{
						d[x]=0;
					}
				}
			}
			a1=d[a[j]]+1;
		}
		for(int x=1;x<=m;x++)if(d[x]!=0)b[x]++;
	}
	for(int x=1;x<=m;x++)cout<<b[x]<<" ";
	return 0;
}
