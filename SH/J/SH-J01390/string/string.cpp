#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long ans=0,n,a[200005],cnt[200005],x;
	char c[200005];
	cin>>n;
	x=n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	for(int i=1;i<=n/2;i++)
	{
		for(int j=1;j<=a[i];j++)
		{
			if(a[x]==0)
			{
				x--;
			}
			if(c[i]!=c[x])
			{
				ans++;
			}
			a[x]--;
		}
	}
	cout<<ans; 
}
