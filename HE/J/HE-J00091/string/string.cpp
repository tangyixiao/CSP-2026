#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	vector<ll> a(n+1);
	vector<char> b(n+1);
	vector<ll> sum(n+1,0);
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		sum[i]=sum[i-1]+a[i];
	}
	ll l,r;
	if(sum[n]%2==0)
	{
		l=sum[n]/2;
		r=l+1;
	}
	else
	{
		l=r=sum[n]/2+1;
	}
	int mid1=-1,mid2=-1;
	bool can=0;
	for(int i=1;i<=n;i++)
	{
		if(mid1==-1&&l<=sum[i])
		{
			mid1=i;
		}
		if(mid2==-1&&r<=sum[i])
		{
			mid2=i;
		}
	}
	ll s=0;
	while(l!=0)
	{
		if(mid1>1&&sum[mid1]>=l) mid1--;
		if(mid2<n&&sum[mid2]<=r) mid2++;
		if(l!=r&&b[mid1]!=b[mid2])
		{
			s++;
		}
		l--;
		r++;
	}
	cout<<s;
	return 0;
}
/*
ÎÒÊÇfurry£¬À©£º35788829581QQ 
RP++
*/
