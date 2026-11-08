#include<bits/stdc++.h>
using namespace std;
int a[500001],x[500001],n,m;
int  find(int need)
{
	for(int i=1;i<=n;i++)
	{
		if(x[i]==need)
			return i;
	}
	return -1;
}
int lo()
{
	int i=1;
	while(a[i]!=0)
	{
		i++;
	}
	return i;
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	 }
	 int k=1,ans=0;
	for(int i=1;i<=n;i++)
	{
		k=0;
		memset(x,0,sizeof(x));
		for(int j=i;j<=n;j++)
		{
			int s=find(a[i]);
			if(s==-1)
			{
				a[k]=a[i];
				k++;
			}
			else 
			{
				for(int v=s;v<=n;v++)
				{
					k--;
					x[v]=0;
				}
				a[k]=a[i];
			}
		}
		if(lo()==i)ans++;
	}
	cout<<ans;
	return 0;
 } 
