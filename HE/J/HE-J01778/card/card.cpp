#include <bits/stdc++.h>
using namespace std;
int c[90000],k[9000];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int a,b;
	cin>>a>>b;
	for(int i=1;i<=a;i++)
	{
		cin>>c[i];
	}
	for(int i=1;i<b;i++)
	{
		for(int j=i+1;j<=b;j++)
		{
			if(c[i]==c[j])
			{
				k[i]=k[i]+1;
			}
			else
			{
				k[i]=k[i]+1;
				k[j]=k[j]+1;
			}
		}
	}
	for(int i=1;i<=b;i++)
	{
		cout<<k[i]<<" ";
	}
}
