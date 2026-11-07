#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","w",stdin);
	freopen("card.out","r",stdin);
	int n,b,s;
	int a[300005],now[100005],com[100005];
	cin>>n>>b;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int l=1;l<=n;l++)
	{
		for(int i=l-1;i<n;i++)
		{
			now[i-l+1]=a[i];
			for(int j=0;j<n;j++)
			{
				if(now[j]==now[i-l+1]) 
				{
					for(int k=j;k<=i-l+100;k++)
					now[k]=0;
					now[i-l+1]=a[i];
				}
			}
		}
			for(int j=0;j<=5000;j++)
			{
				com[now[j]]++;
			}
			
	}
	for(int i=1;i<=b;i++)
	{	
		cout<<com[i]<<' ';
	}
	return 0;
}
