#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200010];
bool cmp(int a,int b)
{
	return a>b;
}
map<int,int> mm;
bool check(int x)
{
	int sum=1;
	while(sum<x)
	{
		sum*=2;
	}
	if(sum==x) return 1;
	else return 0;
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int asnw;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(i==1) asnw=a[i];
		else asnw=asnw&a[i];
		mm[a[i]]++;
	}
	sort(a+1,a+1+n,cmp);
	if(m==1)
	{
		cout<<a[1];
	}
	else if(m==n)
	{
		cout<<asnw;
	}
	else 
	{
		int sum=0;
		int ans=1;
		int f=0;
		for(int i=1;i<=n;i++)
		{
			if(check(a[i])==1) 
			{
				if(mm[a[i]]>=m) 
				{
					//cout<<a[i]<<endl;
					cout<<a[i];
					return 0;
				}
			}
			else 
			{
				//cout<<a[i]<<endl;
				sum++;
				if(f==0)
				{
					f=1;
					ans=a[i];
					
				}
				else 
				{
					ans=ans&a[i];
				}
				if(sum==m)
				{
					break;
				}
			}
		}
		if(sum==m) 
		{
			cout<<ans;
		}
		else 
		{
			for(int i=1;sum<=m;i++)
			{
				if(check(a[i])==1)
				{
					sum++;
					if(f==0)
					{
						f=1;
						ans=a[i];
					}
					else 
					{
						ans=ans&a[i];
					}
				}
			}
		}
	}
	return 0;
 }

