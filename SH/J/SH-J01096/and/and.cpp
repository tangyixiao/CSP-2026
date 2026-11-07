#include <bits/stdc++.h>
using namespace std;

int n,m;
long long a[200010];
string s[200010];
bool vis[200010][40];
long long ans=-1;

string twoo(long long x)
{
	long long e=1;
	string t;
	while(x)
	{
		if(x%2==1)
		{
			t='1'+t;
		}
		else
		{
			t='0'+t;
		}
		x/=2;
	}
	while(t.size()<30)
	{
		t='0'+t;
	}
	return t;
}

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		vis[i][0]=true;
	}
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		s[i]=twoo(a[i]);
	}
	for(int i=1;i<=30;i++)
	{
		int sum=0;
		for(int j=1;j<=n;j++)
		{
			if(s[j][i-1]=='1'&&vis[j][i-1])
			{
				sum++;
				vis[j][i]=true;
			}
			else
			{
				vis[j][i]=false;
			}
		}
		if(sum<m)
		{
			for(int z=1;z<=n;z++)
			{
				if(vis[z][i-1])
				{
					vis[z][i]=true;
				}
			}
		}
	}
	int iffm=1;
	for(int i=1;i<=n;i++)
	{
		if(iffm>m)
		{
			break;
		}
		if(vis[i][30])
		{
			if(ans==-1)
			{
				ans=a[i];
			}
			else
			{
				ans&=a[i];
			}
			iffm++;
		}
	}
	cout<<ans;
	return 0;
}
