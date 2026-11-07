#include<bits/stdc++.h>
using namespace std;
int n=0,m=0,a[200005]={0},maxx1=0,maxx2=0,ans3=0,f=1;
int a3=0,a2=0,a1=0;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]>maxx1)
		{
			maxx1=a[i];
		}
		if(a[i]==3)
		{
			a3+=1;
		}
		else if(a[i]==2)
		{
			a2+=1;
		}
		else if(a[i]==1)
		{
			a1+=1;
		}
		else
		{
			f=0;
		}
	}
	if(f==1)
	{
		if(a3>=m)
		{
			cout<<3;
			return 0;
		}
		else if(a2+a3>=m)
		{
			cout<<2;
			return 0;
		}
		else if(a1+a3>=m)
		{
			cout<<1;
			return 0;
		}
		else
		{
			cout<<0;
			return 0;
		}
	}
	if(m==1)
	{
		cout<<maxx1;
		return 0;
	}
	ans3=a[1];
	if(n<20&&m>2)
	{
		
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			ans3=ans3&a[i];
			for(int j=i+1;j<=n;j++)
			{
				if((a[i]&a[j])>maxx2)
				{
					maxx2=a[i]&a[j];
				}
			}
		}
	}
	
	if(m==2)
	{
		cout<<maxx2;
		return 0;
	}
	if(n==m)
	{
		cout<<ans3;
		return 0;
	}
	return 0;
}
