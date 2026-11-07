#include<bits/stdc++.h>

using namespace std;

int c[500005],tong[500005];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int a,b,maxn=0;
	cin>>a>>b;
	for(int i=1;i<=a;i++)
	{
		cin>>c[i];
	}
	for(int i=1;i<=a;i++)
	{		
		for(int j=i;j<=a;j++)
		{
			if(i==j)
			{
				continue;
			}
			if(c[i]==c[j]&&j>maxn)
			{
				maxn=j;
			}
		}
		for(int j=maxn;j<=a;j++)
		{
			tong[c[j]]++;
		}
	}
	for(int i=1;i<=b;i++)
	{
		cout<<tong[i];
	}
	return 0;
}
