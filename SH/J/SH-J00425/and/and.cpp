#include<bits/stdc++.h>
using namespace std;
int n,m,a[114514],ans2=-1;
string turn1(int x)
{
	string s="";
	while (x>0)
	{
		s=to_string(x%2)+s;
		x/=2;
	}
	while (s.length()<32)
	{
		s='0'+s;
	}
	return s;
}
string check(string a,string b)
{
	string ans="";
	for (int i=31;i>=0;i--)
	{
		if (a[i]=='1'&&b[i]=='1')
		{
			ans='1'+ans;
		}
		else
		{
			ans='0'+ans;
		}
	}
	return ans;
}
int turn2(string s)
{
	long long idx=1,ans=0;
	for (int i=31;i>=0;i--)
	{
		ans+=idx*(s[i]-'0');
		idx*=2;
	}
	return ans;
}
void dfs(int idx,int num,int ans1,int recent)
{
	if (num==m)
	{
		ans2=max(ans2,ans1);
		return ;
	}
	if (idx==n+1)
	{
		return ;
	}
	dfs(idx+1,num,ans1,recent);
	if (recent!=0)
	{
		dfs(idx+1,num+1,ans1+turn2(check(turn1(a[idx]),turn1(recent))),a[idx]);
	}
	else
	{
		dfs(idx+1,num+1,ans1,a[idx]);
	}
}

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[114514];
	cin>>n>>m;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if (m==1)
	{
		int mx=-1;
		for (int i=1;i<=n;i++)
		{
			mx=max(mx,a[i]);
		}
		cout<<mx<<endl;
		return 0;
	}
	else if (m==2)
	{
		int ans=0;
		for (int i=1;i<=n-1;i++)
		{
			ans=max(ans,turn2(check(turn1(a[i]),turn1(a[i+1]))));
		}
		cout<<ans<<endl;
		return 0;
	}
	else if (m==n)
	{
		int ans=0;
		for (int i=1;i<=n-1;i++)
		{
			if (i==1)
			{
				ans=turn2(check(turn1(a[i]),turn1(a[i+1])));
			}
			else
			{
				ans=turn2(check(turn1(ans),turn1(a[i+1])));
			}
		}
		cout<<ans<<endl;
		return 0;
	}
	else if (n<=20)
	{
		dfs(1,0,0,0);
		cout<<ans2<<endl;
		return 0;
	}
	return 0;
}
