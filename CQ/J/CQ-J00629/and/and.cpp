#include<bits/stdc++.h>
using namespace std;
const long long NN=200005;
long long n,m,a[NN][35],s[NN],l,p[NN];
void csh()
{
	for(int i=1;i<=n;i++)
	{
		long long cnt=0;
		while(s[i]!=0)
		{
			a[i][++cnt]=s[i]%2;
			s[i]/=2;
		}
		l=max(l,cnt);
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
		p[i]=s[i];
	}
	csh();
	long long w[NN],cwt=0,tt;
	for(int i=l;i>=1;i--)
	{
		cwt=0,tt=0;
		for(int j=1;j<=n;j++)
		{
			if(a[j][i]==1)
			tt++;
		}
		if(tt<m)
		{
			continue;
			cout<<666;
		}
		for(int j=1;j<=n;j++)
		{
			if(a[j][i]==1)
			w[++cwt]=j;
		}
		if(tt==m)
		{
			break;
		}
		if(tt>m)
		{
			long long ct=1;
			for(int j=1;j<=n;j++)
			{
				if(j==w[ct])
				{
					ct++;
				}
				else
				{
					for(int k=1;k<=l;k++)
					{
						a[j][k]=0;
					}
				}
			}
		}
	}
	long long ans=p[w[1]];
	for(int i=2;i<=m;i++)
	{
		ans&=p[w[i]];
	}
	cout<<ans;
}
/*
4 2
3 15 12 12

12



5 3
31 3 1 15 7
*/

