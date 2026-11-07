#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int a[500050];
vector<int>v;
map<int,int>d,ans;
int read()
{
	int x=0,f=1;
	char ch=getchar();
	while(!isdigit(ch))
	{
		if(ch=='-') f=-1;
		ch=getchar();
	}
	while(isdigit(ch))
	{
		x=x*10+ch-'0';
		ch=getchar();
	}
	return x*f;
}
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	n=read(),m=read();
	for(int i=1;i<=n;i++)
		a[i]=read();
	for(int game=1;game<=n;game++)
	{
		d.clear();
		v.clear();
		for(int i=game;i<=n;i++)
		{
			if(d[a[i]]==0)
			{
				v.push_back(a[i]);
				d[a[i]]++;
			}
			else
			{
				while(!v.empty())
				{
					if(v[v.size()-1]!=a[i])
					{
						d[v[v.size()-1]]--;
						v.pop_back();
					}
					else break;
				}
			}
		}
		for(int x:v)
			ans[x]++;
	}
	for(int i=1;i<=m;i++)
		printf("%lld ",ans[i]);
	return 0;
}
