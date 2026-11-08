#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200999];
int ans=0;
void dfs(int now,int sum,int used)
{
	if(used==m)
	{
		ans=max(ans,sum); 
		return;
	}
	if(now==n)
	{
		return;
	}
	for(int i=now+1;i<=n;i++)
	{
		if(sum==-1)
		{
			dfs(i,a[i],used+1);
		}
		else dfs(i,sum&a[i],used+1);
	}
	dfs(now+1,sum,used);
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int f1=1,f2=1,f3=1;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]!=i-1) f2=0;
		if(a[i]>4) f3=0;
	}
	sort(a+1,a+1+n);
	if(m==1)
	{
		cout<<a[n];
		return 0;
	}
	if(m==n)
	{
		int cnt=a[1];
		for(int i=1;i<=n;i++)
		{
			cnt=cnt&a[i];
		}
		cout<<cnt<<endl;
		return 0;
	}
	if(m==2)
	{
		int cnt=0;
		for(int i=1;i<=n-1;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				cnt=max(cnt,a[i]&a[j]);
			}
		}
		cout<<cnt;
		return 0;
	}
	if(m==n-1)
	{
		int cnt=0; int t=-1;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(i==j) continue;
				if(t==-1) t=a[j];
				else t&=a[j];
			}
			cnt=max(cnt,t);
		}
		cout<<cnt;
		return 0;	
	}
	if(f3==1)
	{
		int c[4];
		for(int i=1;i<=n;i++)
		{
			c[a[i]]++;
		}
		if(c[3]>=m) cout<<3;
		else if(c[3]+c[2]>=m) cout<<2;
		else if(c[3]+c[1]>=m) cout<<1;
		else cout<<0;
		return 0;
	}
	if(n>20000) 
	{
		cout<<a[n-m+1];
		return 0;
	}
	dfs(0,-1,0);
	cout<<ans;
} 
