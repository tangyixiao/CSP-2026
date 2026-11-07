#include<iostream>
#include<cstdio>
using namespace std;
int arr[300002];
int brr[300002];
int crr[300002];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","W",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	for(int i=1;i<=n;i++)
	{
		
		for(int ii=1;ii<=m;ii++)
		{
		
			brr[ii]=0;
		}
		for(int ii=i;ii<=n;ii++)
		{
			int x=arr[ii];
			
			if(brr[x]==1)
			{
				for(int iii=1;iii<=m;iii++)
				{
					brr[iii]=0;
				}
				brr[x]=1;
			}
			else
			{
				brr[x]=1;
			}
		}
		for(int ii=1;ii<=m;ii++)
		{
			if(brr[ii])
			{
				crr[ii]++;
				
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<crr[i]<<" ";
	}
	return 0;
	
}
