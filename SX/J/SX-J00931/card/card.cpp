#include<bits/stdc++.h>
using namespace std;
int a[500001],b[500001],t[500001];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			b[j]=a[j];
			for(int k=i;k<j;k++)
			{
				if(b[k]==b[j])
				{
					b[k]=0;
					while(k!=j-1)
					{
						k++;
						b[k]=0;
					}
				}
			}
		}
		/*for(int j=i;j<=n;j++)
		cout<<b[j]<<" ";
		cout<<endl;*/
		for(int j=i;j<=n;j++)
		{
			t[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<t[i]<<" ";
	}
	return 0;
}