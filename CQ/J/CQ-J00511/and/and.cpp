#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int n,m,a[N],ans,b[25];
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m==1)
	{
		for(int i=1;i<=n;i++) ans=max(ans,a[i]);
		cout<<ans;
	}
	else if(m==2)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++) ans=max(ans,a[i]&a[j]);
		}
		cout<<ans;
		return 0;
	}
	else if(m==n)
	{
		ans=a[1];
		for(int i=2;i<=n;i++) ans&=a[i];
		cout<<ans;
		return 0;
	}
	if(n<=20)
	{
		for(int i=0;i<(1<<n);i++)
		{
			int k=i,t=0;
			for(int j=19;j>=0;j--) 
			{
				if(k>=(1<<j)) k-=(1<<j),b[20-j]=1;
			}
			for(int j=1;j<=20;j++) if(b[j]) t++;
			if(t==m)
			{
				reverse(b+1,b+21);
				int s=-2e18;
				for(int j=1;j<=20;j++) 
				{
					if(s==-2e18&&b[j]) s=a[j];
					else if(b[j]) s&=a[j];
				}
				ans=max(ans,s);
			}
			for(int j=1;j<=20;j++) b[j]=0; 
		}
		cout<<ans;
	}
	return 0;
 }
 
