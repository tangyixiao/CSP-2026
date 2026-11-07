#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	long long n,m;cin>>n>>m;
	//string s[200005];
	int nu[200005];
	int dp[200005];
	for(int i=1;i<=n;i++)
	{
		int x;cin>>x;nu[i]=x;
		//s[i]=(char)(x%2+'0')+s[i];
	}
	if(m==1)
	{
		int maxi=-1;
		for(int i=1;i<=n;i++)
		{
			maxi=max(maxi,nu[i]);
		}
		cout<<maxi;
		return 0;
	}
	if(m==n)
	{
		int mod=nu[1];
		for(int i=2;i<=n;i++)
		{
			mod=mod&nu[i];
		}
		cout<<mod;
		return 0;
	}
	if(m==2)
	{
		int maxi=-1;
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				maxi=max(maxi,nu[i]&nu[j]);
			}
		}
	}
	int mod=-1;
	for(int i=1;i<=m;i++)
	{
		mod=mod&nu[i];
	}
	for(int i=m+1;i<=n;i++)
	{
		
	}
	
	return 0;
}
