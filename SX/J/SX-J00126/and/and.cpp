#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+7;
int n,m;
ll a[N];
ll mmax=-1e18+1,mmax2=-1e18+1;
void dfs(int step,int num,ll sum)
{
	if(num>m)
	{
		mmax=max(mmax,sum);
		return ;
	}
	if(step>n) return ;
	if(num==0)
	{
		dfs(step+1,num+1,a[step]);
		dfs(step+1,num,sum);
	}
	else 
	{
		dfs(step+1,num+1,(a[step]&sum));
		dfs(step+1,num,sum);
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		//mmax2=max(mmax2,a[i]);
	}
	if(m==1)
	{
		for(int i=1;i<=n;i++)
		{
			mmax2=max(mmax2,a[i]);
		}
		cout<<mmax2;
		return 0;
	}
	if(m==2)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				mmax2=max(mmax2,(a[i]&a[j]));
			}
		}
		cout<<mmax2;
		return 0;
	}
	if(m==n)
	{
		int ans=a[1];
		for(int i=1;i<=n;i++)
		{
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	dfs(1,0,0);
	cout<<mmax;
	return 0;
}
//freeopen(
//freopen(
//freoopen(
//void afternoon_csp-s(bool bo,int rp)
// {bo=1;while(1){rp++;}}
