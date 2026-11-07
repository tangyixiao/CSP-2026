#include<bits/stdc++.h>
using namespace std;
int n,m,cnt=0;
int a[500005];
int jr[500005];
int fl[500005];
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
		for(int j=1;j<=n;j++)
		{
			jr[j]=0;
		}
		for(int j=i;j<=n;j++)
		{
			for(int k=1;k<j;k++)
			{
				if(a[j]==jr[k])
				{
					for(int l=k;l<j;l++)
					{
						jr[l]=0;
					}
				}
			}
			jr[++cnt]=j;
		}
		for(int j=1;j<=n;j++)
		{
			fl[jr[j]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<fl[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
