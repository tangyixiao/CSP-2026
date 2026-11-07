#include <bits/stdc++.h>
#include <cstdio>
#include <stdio.h>
using namespace std;
const int N=2e5+5;
char x2[N],a1[N],a2[N];
bool flag[N];
long long x1[N],num=1,num1=1;
int n,cnt=0,ans;
int main() 
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x1[i]>>x2[i];
		if(x1[i]==1)flag[i]=1;
	}
	for(int i=1;i<=n;i++)
	{
		if(flag[i]==1)cnt++;
	}
	if(cnt==n)
	{
		ans=cnt/2;
		cout<<ans;
	}
	else
	{
		ans=0;
		int mid=n/2;
		for(int i=1;i<=mid;i++)
		{
			for(long long j=1;j<=x1[i];j++)
			{
				a1[num]=x2[i];
				num=num+x1[i];
			}
		}			
		num=1;
		if(n%2==0)
		{
			for(int i=n;i>=mid+1;i--)
			{
				for(long long j=1;j<=x1[i];j++)
				{
					a2[num]=x2[i];
					num++;
				}				
			}
		}
		else 
		{
			for(int i=n;i>=mid+2;i--)
			{
				num1=num;
				for(long long j=1;j<=x1[i];j++)
				{
					a2[num1]=x2[i];
					num1++;
				}
				num+=x1[i];
			}
		}
		for(int i=1;i<=num-1;i++)
		{
			if(a1[i]!=a2[i])ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}