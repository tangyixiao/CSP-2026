#include<bits/stdc++.h>//and
using namespace std;
const int N=2e5+100;
int a,b,c[N],d[N],e[30],f[30],g,h;
int ans1=0;
void dfs(int x,int y)
{
	if(x>a)
	{
		if(y!=b)
		{
			return ;
		}
		int u=-1;
		for(int i=1;i<=a;i++)
		{
			if(d[i]==1)
			{
				if(u==-1)
				{
					u=c[i];
				}
				else
				{
					u=u&c[i];
				}
			}
		}
		ans1=max(ans1,u);
		return ;
	}
	if(y<b)
	{
		d[x]=1;
		dfs(x+1,y+1);
		d[x]=0;
	}
	d[x]=0;
	dfs(x+1,y);
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	//ios::sync_with_atdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>a>>b;
	for(int i=1;i<=a;i++)
	{
		cin>>c[i];
	}
	if(a<=20)
	{
		dfs(1,0);
		cout<<ans1;
		return 0;
	}
	if(b==1)
	{
		int p=0;
		for(int i=1;i<=a;i++)
		{
			p=max(p,c[i]);
		}
		cout<<p;
		return 0;
	}
	if(b==2)
	{
		int p=0;
		for(int i=1;i<=a;i++)
		{
			for(int j=i+1;j<=a;j++)
			{
				p=max(p,c[i]&c[j]);
			}
		}
		cout<<p;
		return 0;
	}
	if(b==a)
	{
		int p=0;
		for(int i=1;i<=a;i++)
		{
			if(i==1)
			{
				p=c[i];
			}
			else
			{
				p=c[i]&p;
			}
		}
		cout<<p;
		return 0;
	}
	if(b==a-1)
	{
		f[0]=1;
		for(int i=1;i<=26;i++)
		{
			f[i]=f[i-1]*2;
		}
		for(int i=1;i<=a;i++)
		{
			int o=c[i],u=0;
			while(o)
			{
				if(o%2==1)
				{
					e[u]++;
				}
				u++;
				o=o/2;
			}
		}
		int ans3=0;
		for(int i=1;i<=a;i++)
		{
			int o=c[i],u=0;
			while(o)
			{
				if(o%2==1)
				{
					e[u]--;
				}
				u++;
				o=o/2;
			}
			int ans2=0;
			for(int j=0;j<=25;j++)
			{
				if(e[j]==a-1)
				{
					ans2+=f[j];
				}
			}
			ans3=max(ans3,ans2);
			o=c[i],u=0;
			while(o)
			{
				if(o%2==1)
				{
					e[u]++;
				}
				u++;
				o=o/2;
			}
		}
		cout<<ans3;
		return 0;
	}
	sort(c+1,c+1+a);
	h=0;
	for(int i=a;i>=a-b+1;i--)
	{
		if(i==a)
		{
			h=c[i];
		}
		else
		{
			h=h&c[i];
		}
	}
	cout<<h;

	return 0;
}
