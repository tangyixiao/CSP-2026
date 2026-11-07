#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,vis[3010],ans[3010],a[1000010],cnt2[1000010],ans2[1000010];
void func1()//暴力 O(n^2*m) 
{
	for(int t=1;t<=n;t++)
	{
		memset(vis,0,sizeof vis);
		for(int i=t;i<=n;i++)
		{
			if(vis[a[i]])
			{
				for(int j=i-1;a[j]!=a[i];j--)
				{
					vis[a[j]]=0;
				}
			}
			vis[a[i]]=1;
		}
		for(int i=1;i<=m;i++)
		{
			ans[i]+=vis[i];
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<' '; 
	}
}
void func2()//性质A
{
	for(int i=1;i<=n;i++)
	{
		cnt2[a[i]]++;
	}
	for(int i=1;i<=n;i++)
	{
		cnt2[a[i]]--;
		if(cnt2[a[i]]==0)ans[a[i]]=i;
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<' '; 
	}
}
void func3()//m<=2
{
	if(m==1)
	{
		cout<<n;
		return; 
	}
	int cnt=0;
	for(int i=1;i<=n;i++)cnt+=(a[i]!=a[n]);
	if(a[n]==1)
	{
		cout<<n<<' '<<cnt;
	}
	else
	{
		cout<<cnt<<' '<<n;
	}
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool f2=1;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]<a[i-1])f2=0;
	}
	if(m<=2)func3();
	else if(f2)func2();
	else func1();
	return 0;
}
