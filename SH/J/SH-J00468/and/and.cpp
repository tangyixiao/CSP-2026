#include<bits/stdc++.h>
#define N 200005
using namespace std;
//T3一堆特判至少65代码 
int n,m,a[N],ans,mx,cnt[10];
set<int>st;
void dd()
{
	for(int i=1;i<=30;i++)
	{
		st.insert((1<<i)-1);
	}
}
void dfs(int now,int k,int x)//当前看了前i个，一共选了k个，值为x 
{
	if(k==m)
	{
		ans=max(ans,x);
		return;
	}
	for(int i=now+1;i<=n;i++)
	{
		dfs(i,k+1,x&a[i]);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(n<=20)
	{
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(int i=1;i<=n-m+1;i++)
		{
			dfs(i,1,a[i]);
		}
		cout<<ans;
		return 0;
	}
	if(m==1)
	{
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			ans=max(ans,a[i]);
		}
		cout<<ans;
		return 0;
	}
	else if(m==2)
	{
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	else if(m==n)
	{
		ans=(1ll<<31)-1;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	else//A
	{
		bool f=false;
		dd();
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			mx=max(mx,a[i]);
			if(!st.count(a[i]))
			{
				f=true;
			}
		}
		if(!f)
		{
			sort(a+1,a+1+n,greater<int>());
			cout<<a[m];
			return 0;
		}
		else if(mx<=4)
		{
			for(int i=1;i<=n;i++)
			{
				cnt[a[i]]++;
			}
			if(cnt[4]>=m)
			{
				cout<<4;
				return 0;
			}
			else if(cnt[3]>=m)
			{
				cout<<3;
				return 0;
			}
			else if(cnt[3]+cnt[2]>=m)
			{
				cout<<2;
				return 0;
			}
			else if(cnt[3]+cnt[1]>=m)
			{
				cout<<1;
				return 0;
			}
			else
			{
				cout<<0;
				return 0;
			}
		}
		else
		{
			for(int i=1;i<=n-m+1;i++)
			{
				dfs(i,1,a[i]);
			}
			cout<<ans;
			return 0;
		}
	}
	return 0;
}
