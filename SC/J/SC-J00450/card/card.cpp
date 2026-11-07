#include <bits/stdc++.h>
using namespace std;
int a[100005];
int s[100005];
int n,m;
int z[100005];
int main()
{
	freopen("card.in ","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		z[i]=a[i];
	}
	if(n==1 && m==1) 
	{
		if(a[1]!=1)
		{
		    cout<<0;
		    return 0;
		}
		else
		{
			cout<<1;
			return 0;
		}
    }
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			a[i]=z[i];
		}
		for(int j=i;j<=n;j++)
		{
			for(int rt=1;rt<j;rt++)
			{
			    if(a[rt]==a[j] && a[j]!=-1)
			    {
				    for(int l=rt;l<j;l++)
		    		{
			    		a[l]=-1;
			    	}
			    }
		    }
		}
		for(int j=i;j<=n;j++)
		{
			if(a[j]!=-1)
			{
				s[a[j]]++;
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<s[i]<<" ";
	}
}