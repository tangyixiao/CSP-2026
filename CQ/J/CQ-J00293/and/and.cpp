#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const ll MAXN=2e5+5;

ll n,m,ls[MAXN],dp[MAXN][MAXN],mx=-1,sum,cnt;

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>ls[i];
		mx=max(mx,ls[i]);
	}
	if(m==1)
	{
		cout<<mx;
		return 0;
	}
	sort(ls+1,ls+n+1);
	sum=ls[2]; 
	for(int i=2;i<=n;i++)
	{
		sum=sum&ls[i];
	}
	if(m==n-1)
	{
		cout<<sum;
		return 0;
	}
	return 0;
}
