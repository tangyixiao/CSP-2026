#include<bits/stdc++.h>
using namespace std;
int a[200002];
int word[200002];
int box[10000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}	
	sort(a+1,a+n+1);
	if(m==1)
	{
		cout<<a[n];
		return 0;
	}
	if(m==n)
	{
		int ans=a[n];
		for(int i=n-1;i>=0;i--)
		{
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==2)
	{
		for(int i=n;i>=2;i--)
		{
			int flag=1;
			for(int j=2;j<=20;j++)
			{
				if(a[i]>pow(2,j)&&a[i-1]<pow(2,j-1))
				{
					flag=0;
				}
			} 
			if(flag)
			{
				int asdd=a[i]&a[i-1];
				cout<<asdd;
				return 0;
			}
		}
		cout<<a[n]%a[n-1];
		return 0;
	}
	if(m==n-1)
	{
		int ans=a[n];
		for(int i=n-1;i>=2;i--)
		{
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	bool flag=1;
	int cnt=1;
	for(int i=1;i<=20;i++)
	{
		if(n==cnt)
		{
			flag=0;
		}
		cnt*=2;
	}
	if(flag)
	{
		cout<<a[n-m+1];
		return 0;
	}
	flag=1;
	for(int i=1;i<=n;i++)
	{
		if(a[i]>4)
		{
			flag=0;
		}
	}
	if(flag)
	{
		
		for(int i=1;i<=n;i++)
		{
			box[a[i]]++;
		}
		if(box[3]>=m)
		{
			cout<<3;
		}
		else
		{
			if(box[2]+box[3]>=m)
			{
				cout<<2;
			}
			else if(box[1]+box[3]>=m)
			{
				cout<<1;
			}
			else
			{
				cout<<0;
			}
		}
		return 0;
	}
	
	return 0;
} 


