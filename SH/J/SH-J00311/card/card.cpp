#include<iostream>
using namespace std;
int n,m,a[500001],i,j,boola[500001][2],ans[500001],goback;
void cmpif(int y)
{
	int k;
	for(k=boola[a[j]][2]+1;k<y;k++)
	{
		a[k]=0;
	}
	goback=y-boola[a[j]][2];
	return;
}
int main()
{
	freopen("card1.in","r",stdin);
	freopen("card1.out","w",stdout);
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			if(boola[a[j]][1]==1)
			{
				cmpif(j);
			}
			else
			{
				boola[a[j]][1]=1;
				boola[a[j]][2]=j;
			}
		}
		for(j=i;j<=n;j++)
		{
			if(boola[j][1]==1)
			{
				ans[j]++;
			}
		}
		for(j=1;j<=n;j++)
		{
			boola[j][1]=0;
			boola[j][2]=0;
		}
	}
	for(i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}
