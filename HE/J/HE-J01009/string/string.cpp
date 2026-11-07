#include<bits/stdc++.h>
#define int long long
int n,sum=0,a[100005];

using namespace std;
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int flag=0;char c[100005];
	for(int i=1;i<=n;i++)
	{	
		cin>>a[i]>>c[i];			
	}
	int ans=c[1];
	for(int i=1;i<=n;i++)
	{	
		if(ans!=c[i])
		{
			flag=1;
			break;
		}
		ans=c[i];	
	}
	if(flag==0)
	{
		cout<<0;
		return 0;
	}
	for(int i=1;i<=n;i++)
	{	
		sum+=a[i]/2;
	}
	cout<<sum;
	return 0;
}

