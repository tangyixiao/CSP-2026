#include<bits/stdc++.h>

using namespace std;
int n,m;
int a[500005];
int mt[300005];
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
		int tmp[m+2];
		for(int j=1;j<=m+1;j++)
		{
			tmp[j]=0;
		}
		int k=1;
		
		for(int j=i;j<=n;j++)
		{
			if(tmp[a[j]]==0)
			{
				tmp[a[j]]=k;
				k++;
			}
			else
			{
				k=tmp[a[j]]+1;
				for(int kk=1;kk<=m;kk++)
				{
					if(tmp[kk]>tmp[a[j]])
					{
						tmp[kk]=0;
					}
				}
			}
		}
		for(int j=1;j<=m;j++)
		{
			
			if(tmp[j]!=0)
			{
				
				mt[j]++;
			}
			
		}

	}
	for(int i=1;i<=m;i++)
	{
		cout<<mt[i]<<' ';
	}
	return 0;
}
