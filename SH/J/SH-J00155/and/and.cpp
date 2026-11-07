#include<bits/stdc++.h>
using namespace std;
int n,m;
long long ans;
long long a[2010];
int vis[2010];
int cmp(int x,int y)
{
	string s,s1;
	while(x)
	{
		s+=x%2+'0';
		x/=2;
	}
	while(y)
	{
		s1+=x%2+'0';
		y/=2;
	}
	reverse(s.begin(),s.end());
	reverse(s1.begin(),s1.end());
	int sum=0;
	for (int i=0;i<=min(s.size(),s1.size());i++)
	{
		if (s[i]=='0'&&s1[i]=='0')
		{
			int q=pow(2,i);
			sum=sum+q;
		}
	}
	return sum;
}
void bfs(int x,long long cnt)
{
	if (x==0)
	{
		ans=max(ans,cnt);
		return ;
	}
	for (int i=1;i<=n;i++)
	{
		if (!vis[i])
		{
			vis[i]=1;
			if (x==m)
			{
				bfs(x-1,a[i]);
			}
			else
			bfs(x-1,cmp(cnt,a[i]));
			vis[i]=0;
		}
	}
}
int main()
{
	freopen("and.in ","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if (m==1)
	{
		sort(a+1,a+n+1,greater<int>());
		cout<<a[1];
		return 0;
	}
	if (n<=20)
	{
		bfs(m,0);
		cout<<ans;
	}
	return 0;
} 
