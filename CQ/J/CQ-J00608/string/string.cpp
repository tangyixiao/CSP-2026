#include<iostream>
#include<string>
using namespace std;
#define int long long
int n;
int a[200005];
char c[200005];
char s[0x7fffffff/2];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		cin>>c[i];
	}
	if(n==1||n==0)
	{
		cout<<0;
		return 0;
	}
	if(n==2)
	{
		int cs=0;
		int len=a[1]+a[2];
		for(int i=1;i<=a[1];i++)
		{
			s[i]=c[1];
		}
		for(int i=a[1]+1;i<=len;i++)
		{
			s[i]=c[2];
		}
		for(int i=1;i<=len;i++)
		{
			for(int j=len;j>=1;j--)
			{
				if(s[i]!=s[j]) 
				{
					s[j]=s[i];
					cs++;
				}
			}
		}
		cout<<cs;
	}
	if(n==3)
	{
		int cs=0;
		int len=a[1]+a[2];
		for(int i=1;i<=a[1];i++)
		{
			s[i]=c[1];
		}
		for(int i=a[1]+1;i<=a[1]+a[2];i++)
		{
			s[i]=c[2];
		}
		int cnt=a[1]+a[2]+1;
		while(cnt<=len)
		{
			cnt++;
			s[cnt]=c[3];
		}
		for(int i=1;i<=len;i++)
		{
			cout<<s[i];
		}
		for(int i=1;i<=len;i++)
		{
			for(int j=len;j>=1;j--)
			{
				if(s[i]!=s[j]) 
				{
					s[j]=s[i];
					cs++;
				}
			}
		}
		cout<<cs;
	}
	if(n==4)
	{
		int cs=0;
		int len=a[1]+a[2];
		for(int i=1;i<=a[1];i++)
		{
			s[i]=c[1];
		}
		for(int i=a[1]+1;i<=a[1]+a[2];i++)
		{
			s[i]=c[2];
		}
		for(int i=a[1]+a[2]+1;i<=a[1]+a[2]+a[3];i++)
		{
			s[i]=c[3];
		}
		for(int i=a[1]+a[2]+a[3]+1;i<=len;i++)
		{
			s[i]=c[4];
		}
		for(int i=1;i<=len;i++)
		{
			for(int j=len;j>=1;j--)
			{
				if(s[i]!=s[j]) 
				{
					s[j]=s[i];
					cs++;
				}
			}
		}
		cout<<cs;
	}
	return 0;
}
