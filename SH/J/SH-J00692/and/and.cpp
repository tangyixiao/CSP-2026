#include <bits/stdc++.h>
using namespace std;
int a[200010];
string s[200010];
string t[35][200010];
long long p[35];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	p[0]=1;
	for(int i=1;i<=32;i++)
	{
		p[i]=p[i-1]*2;
	}
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=32;j>=0;j--)
		{
			if(a[i]>=p[j])
			{
				s[i]=s[i]+'1';
				a[i]-=p[j];
			}
			else
			{
				s[i]=s[i]+'0';
			}
		}
	}
	int cur=n;
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		t[0][i]=s[i];
	}
		for(int i=0;i<=32;i++)
		{
			int cnt=0;
			for(int j=1;j<=cur;j++)
			{
				if(t[i][j][i]=='1')
				{
					cnt++;
				}
			}
			if(cnt>=k)
			{
				int cnt1=cur;
				cur=0;
				ans+=p[32-i];
				for(int j=1;j<=cnt1;j++) 
				{
					if(t[i][j][i]=='1')
					{
						t[i+1][++cur]=t[i][j];
					}
				}
			}
			else
			{
				for(int j=1;j<=cur;j++)
				{
					t[i+1][j]=t[i][j];
				}
			}
		}
	cout<<ans;
}
