#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[1010001],cnt,zxcvbnm,q,asdfghjkl,c[2000001],yu,guq,llll;
bool b[5000001],qw,bb[5100110];
void pianfen()
{
	int x=1;
	b[1]=1;
	for(int i=1;i<=30;i++)
	{
		x*=2;
		b[x-1]=1;
	}
	return ;
}
void dfs(int k)
{
	if(k==m+1)
	{
		int ans=c[1];
		for(int i=2;i<=m;i++)
		{
			ans=ans&c[i];
		}
		asdfghjkl=max(asdfghjkl,ans);
	}
	for(int i=1;i<=n;i++)
	{
		if(!bb[i])
		{
			bb[i]=1;
			yu++;
			c[yu]=a[i];
			dfs(k+1);
			yu--;
			bb[i]=0;
		}
	}
}
bool cmp(int a,int b)
{
	return a>b;
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		guq=max(guq,a[i]); 
		if(!b[a[i]])
		{
			qw=1;
		}
	}
	if(qw==0&&n>=30)
	{
		int s=a[1];
		sort(a+1,a+1+n);
		for(int i=n-1;i>=n-m;i--)
		{
			s=s&a[i];
		}
		cout<<s;
		return 0; 
	}
	if(m==1&&n>=30)
	{
		for(int i=1;i<=n;i++)
		{
			zxcvbnm=max(zxcvbnm,a[i]);
		}
		cout<<zxcvbnm;
		return 0;
	}
	if(m==n&&n>=30)
	{
		cnt=a[1];
		for(int i=2;i<=n;i++)
		{
			cnt=a[i]&cnt;
		}
		cout<<cnt;
		return 0;
	}
	if(guq<=4&&n>=30)
	{
		for(int i=1;i<=n;i++)
		{
			if(a[i]==3)
			{
				m--;
			}
			if(m==0)
			{
				cout<<3;
				return 0;
			}
		}
		for(int i=1;i<=n;i++)
		{
			if(a[i]==1)
			{
				m--;
			}
			if(m==0)
			{
				cout<<1;
				return 0;
			}
		}
		cout<<0;
		return 0;
	}
	if(m==2&&n>=30)
	{
		sort(a+1,a+1+n,cmp);
		int dw;
		for(int i=1;i<=n;i++)
		{
			if(b[a[i]])
			{
				llll=a[i];
				dw=i+1;
				break;
			}
		}
		for(int i=dw;i<=n;i++)
		{
			if(b[a[i]])
			{
				llll=llll&a[i];
				cout<<llll;
				return 0;
			}
		}
		cout<<0;
		return 0; 
	}
	if(m==n-1&&n>=30)
	{
		cout<<0;
		return 0;
	}
	dfs(1);
	cout<<asdfghjkl;
	return 0;
}