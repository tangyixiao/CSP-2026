#include<iostream>
#include<cstdio>
#include<cmath>
int ca[500009];
int cr[500009];
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int a,b;
	cin>>a>>b;
	for(int i=0;i<a;i++)
	{
		cin>>ca[i];
		
	}
	int u=0,i=0;
	for(int i=0;i<a;i++)
	{
		u=i;
		int table[500010]={};
		for(int j=i;j<a;j++)
		{
			for(int k=i;k<a;k++)
			{
				if(table[k]==ca[u])
				{
					table[500009]=k;
					for(int l=k;l<a;l++)
					{
						table[l]=0;
					}
					break;
				}
			}
			table[500009]++;
			table[table[500009]-1]=ca[u];
			u++;
		}
		for(int j=0;j<table[500009];j++)
			{
				cr[table[j]]++;
			}
	}
	for(int i=1;i<=b;i++)
	{
		cout<<cr[i]<<' ';
	}
	return 0;
}