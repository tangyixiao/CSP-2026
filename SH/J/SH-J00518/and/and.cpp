//都看了我代码了，给我洛谷加个关注吧：758513 
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int a[200005];
int n,m;
int ans=0;
int ch[200005];
void dfs(int step,int lst)
{
	if (step>m)
	{
		int sum=a[ch[1]];
		for (int i=2;i<=m;i++)
		{
			sum=sum&a[ch[i]];
		}
		ans=max(ans,sum);
		return ;
	}
	for (int i=lst+1;i<=n;i++)
	{
		ch[step]=i;
		dfs(step+1,i);
	}
}
bool cmp(int x,int y)
{
	return x>y;
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr); 
	cin>>n>>m;
	int maxn=0,sum=0;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
		maxn=max(maxn,a[i]);
		if (i==1)	sum=a[i];
		else	sum=sum&a[i];
	}
	if (n<=20 || m==2)
	{
		dfs(1,0);
		cout<<ans<<endl;
	}
	else if (m==1)
	{
		cout<<maxn<<endl;
	}
	else if (m==n)
	{
		cout<<sum<<endl;
	}
	else if (maxn<4)
	{
		for (int i=1;i<=n;i++)
		{
			if (a[i]==3)	m--;
		}
		if (m<=0)	cout<<3<<endl;
		else
		{
			int mm=m;
			for (int i=1;i<=n;i++)
			{
				if (a[i]==2)	m--;
			}
			if (m<=0)	cout<<2<<endl;
			else
			{
				m=mm;
				for (int i=1;i<=n;i++)
				{
					if (a[i]==1)	m--;
				}
				if (m<=0)	cout<<1<<endl;
				else	cout<<0<<endl;
			}
		}
	}
	else
	{
		int nn=n;
		bool flag=true;
		int k=0;
		while (nn>1)
		{
			if (nn%2==1)
			{
				flag=false;
				break;
			}
			k++;
			nn/=2;
		}
		for (int i=1;i<=n;i++)
		{
			if (a[i]!=i-1)
			{
				flag=false;
				break;
			}
		}
		if (flag)
		{
			m--;
			int w=0;
			while (m>0)
			{
				w++;
				m/=2;
			}
			cout<<max((n-1)-((1<<w))+1,0ll)<<endl;
		}
		else
		{
			sort(a+1,a+n+1,cmp);
			ans=0;
			for (int i=1;i<=m;i++)
			{
				if (i==1)	ans=a[i];
				ans=ans&a[i];
			}
		}
	}
	return 0;
}
	

