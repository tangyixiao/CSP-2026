#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

#define N 200005

int n,m,a[N];
vector<int> b;
int ans;

void dfs(int pos,int idx)
{
	if(pos>m)
	{
		int x=0;
		
		for(int y:b)
		if(!x)
		x=y;
		else
		x&=y;
		
		ans=max(ans,x);
		
		return;
	}
	
	for(int i=idx+1;i<=n;i++)
	{
		b.push_back(a[i]);
		
		dfs(pos+1,i);
		
		b.pop_back();
	}
}

int cnt(int n)
{
	int res=0;
	
	while(n)
	{
		if(n%2==0)
		res++;
		
		n>>=1;
	}
	
	return res;
}

signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	
	for(int i=1;i<=n;i++)
	cin>>a[i];
	
	if(n<=20)
	{
		dfs(1,0);
		
		cout<<ans<<endl;
	}
	else if(n<=2000)
	{
		if(m==1)
		{
			int mx=0;
			
			for(int i=1;i<=n;i++)
			mx=max(mx,a[i]);
			
			cout<<mx<<endl;
		}
		else if(m==n)
		{
			int ans=a[1];
			
			for(int i=2;i<=n;i++)
			ans&=a[i];
			
			cout<<ans<<endl;
		}
		else if(m==2)
		{
			int ans=0;
			
			for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
			ans=max(ans,a[i]&a[j]);
			
			cout<<ans<<endl;
		}
	}
	else
	{
		if(m==n-1)
		{
			int mx=0,idx=0;
			
			for(int i=1;i<=n;i++)
			{
				int c=cnt(a[i]);
				
				if(c>mx)
				{
					mx=c;
					idx=i;
				}
			}
			
			int ans=0;
			
			for(int i=1;i<=n&&i!=idx;i++)
			if(!ans)
			ans=a[i];
			else
			ans&=a[i];
			
			cout<<ans<<endl;
		}
	}
	
	return 0;
}
