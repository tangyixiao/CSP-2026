#include<bits/stdc++.h>

using namespace std;

#define int long long

const int N=2*1e5+5;

int po,sum,a,lens,r;

struct add
{
	int l,r;
	char b;
};

add t[N];

void dfs(int now,int y,int u)
{
	int n=y,m=u;
	if(now>t[a].r)
	{
		return ;
	}
	int e=-1,f=-1,i=0,x=lens*2-now;
	char flage=0,flagf=0;
	while(e==-1||f==-1)
	{
		if(t[n].l<=x&&t[n].r>=x)
		{
			e=lens*2-now-t[n].l+1;
			flage=t[n].b;
		}
		else
		{
			n--;
		}
		if(t[m].l<=now&&t[m].r>=now)
		{
			f=t[m].r-now+1;
			flagf=t[m].b;
		}
		else
		{
			m++;
		}
		i++;
	}
	if(flage==flagf)
	{
		dfs(now+min(e,f),n,m);
	}
	else
	{
		dfs(now+min(e,f),n,m);
		sum+=min(e,f);
	}
}

signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>a;
	t[0].r=0;
	for(int i=1;i<=a;i++)
	{
		int x;
		char y;
		cin>>x>>y;
		t[i].l=t[i-1].r+1;
		t[i].r=t[i].l+x-1;
		t[i].b=y;
	}
	if(t[a].r%2==0)
	{
		lens=t[a].r/2;
	}
	else
	{
		lens=t[a].r/2+1;
	}
	for(int i=1;i<=a;i++)
	{
		if(t[i].r>=lens&&t[i].l<=lens)
		{
			r=i;
		}
	}
	po=lens+1;
	sum=0;
	dfs(po,r,r);
	cout<<sum;
	return 0;
}
