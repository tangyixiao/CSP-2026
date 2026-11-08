/*
	设答案序列为(二进制下) x1,x2,x3,x4,...,xn;
	则依次从高位到地位尽量确定xi=1; 
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int lim;
int a[200009];
int xf[39];
bool vis[200009];//标记为1代表不选 
int ans=0;;
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	xf[0]=1;
	
	for(int i=1;i<=31;i++)
	{
		xf[i]=xf[i-1]*2;
	}
	
	cin>>n>>m;
	
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=31;i>=0;i--)
	{
		int cnt=0;
		for(int j=1;j<=n;j++)
		{
			if((xf[i]&a[j])&&vis[j]==0)
			{
				cnt++;
			}
		}
		
		if(cnt>=m)
		{
			ans+=xf[i];
			for(int j=1;j<=n;j++)
			{
				if((xf[i]&a[j])==0)
				{
					vis[j]=1;
				}
			}
		}
	}
	
	cout<<ans;
	
	return 0;
}
