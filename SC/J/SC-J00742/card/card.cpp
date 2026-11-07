#include<bits/stdc++.h>
#define int long long
using namespace std;
inline int read()
{
	int x=0,f=1;
	char ch=getchar();
	while(ch<'0'||ch>'9')
		ch=getchar();
	while(ch>='0'&&ch<='9')
	{
		x=x*10+(ch-'0');
		ch=getchar();
	}
	return f*x;
}
int n,m;
int a[200010];
int t[200010];
int la[200010];
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	n=read(),m=read();
	bool bol=true;
	for(int i=1;i<=n;++i)
		a[i]=read();
	for(int i=1;i<=n;++i)
		if(a[i]-a[i-1]<0)
			bol=false;
	if(bol==true)
	{
		for(int i=1;i<=m;++i)
			la[i]=upper_bound(a+1,a+n+1,i)-a-1;
		for(int i=1;i<=m;++i)
			cout<<la[i]<<' ';
		return 0;
	}
	for(int i=1;i<=n;++i)
	{
		map<int,int> mp;
		int r[5010]={};
		for(int j=i;j<=n;++j)
		{
			if(mp[a[j]]==0)
				mp[a[j]]=1,r[a[j]]=j;
			else
			{
				for(int k=r[a[j]]+1;k<j;++k)
					mp[a[k]]=0;
				mp[a[j]]=1;
			}
		}
		for(auto it:mp)
		{
			if(it.second>=1)
				t[it.first]++;
		}
	}
	for(int i=1;i<=m;++i)
		cout<<t[i]<<' ';
	return 0;
}