#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll n;
int main()
{
	freopen(" string.in","r",stdin);
	freopen(" string.out","w",stdout);
	cin>>n;
	ll a[100010];
	char b[100010];
	ll nb=0,nb666=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
	}
	int sum=0;
	for(int i=1;i<n;i++)
	{
		if(b[i]==b[i+1])
		{
			nb666+=a[i];
			sum++;
		}
		else
		{
			break;
		}
	}
	if(sum==n-1)
	{
		cout<<0;
		return 0;
	}
	for(int i=sum+2;i<=n;i++)
	{
		nb+=a[i];
	}
	if(nb666>=nb)
	{
		cout<<nb;
		return 0;
	}
	if(a[n]>a[1])
	{
		cout<<a[n];
		return 0;
	}
	if(nb>nb666)
	{
		cout<<a[1];
		return 0;
	}
	return 0;
}
