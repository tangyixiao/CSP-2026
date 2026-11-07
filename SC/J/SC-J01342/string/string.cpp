#include<bits/stdc++.h>
using namespace std;
long long ans=0;
long long a[3000000];
char b[3000000];
void dfs(int p,int q,bool m)//m是否为偶数 
{
	if(p+1==q)
	{
		long long x=(a[p]+a[q])/2;
		if(b[p]==b[q])
		{
			return;
		}
		else
		{
			if((a[p]+a[q])%2==0)
			{
				if(a[p]<x)
				{
					ans=ans+x-a[p];
					return ;
				}
				else
				{
					if(a[p]==a[q])
					{
						ans=a[q]+ans;
						return;
					}
					else
					{
						ans=a[q]+ans;
						return;
					}
				}
			}
			else
			{
				if(x>=a[p])
				{
					ans=ans+a[p];
					return;
				}
				else
				{
					ans=a[q]+ans;	
					return;
				}
			}
				
		}
		
	}
	if(b[p]==b[q])
	{
		if(a[p]<a[q])
		{
			a[q]=a[q]-a[p];
			dfs(p+1,q,m);
		}
		else
		{
			if(a[p]==a[q])
			{
				dfs(p+1,q-1,m);
			}
			else
			{
				a[p]=a[p]-a[q];
				dfs(p,q-1,m);
			}
		}
	}
	else
	{
		if(a[p]<a[q])
		{
			ans=a[p]+ans;
			a[q]=a[q]-a[p];
			dfs(p+1,q,m);
		}
		else
		{
			if(a[p]>a[q])
			{
				ans=a[q]+ans;
				a[p]=a[p]-a[q];
				if(a[p]==0)
				{
					dfs(p+1,q,m);
				}
				else
				{
					dfs(p,q-1,m);
				}
				
			}
			else
			{
				ans=ans+a[p];
				dfs(p+1,q-1,m);
			}
			
		}
	}
	return ;
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,num=0;
	cin>>n;
	if(n==1)
	{
		cout<<0;
		return 0;
	}
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		num=num+a[i];
	}
	int p=0,q=n-1;
	dfs(p,q,1);
	cout<<ans;
	return 0;
}