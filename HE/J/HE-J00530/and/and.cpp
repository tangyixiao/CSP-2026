#include<bits/stdc++.h>
using namespace std;
int n,m; 
int sum=1;
long long f[100005];
string maxn;
int main()
{
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>f[i];
	
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			maxn=max(f[i]&f[i+1],f[i+1]&f[i+2]);
		}
	}
	cin>>maxn;
	for(int i=0;i<maxn.size();i++)
	{
		cin>>maxn[i];
		for(int j=1;j<=maxn[i];j++)
		{
			sum=sum*j;
		}
		//sum+=int(maxn[i])*2^i;
		
	}
	
	cout<<sum;
	return 0;
 } 
