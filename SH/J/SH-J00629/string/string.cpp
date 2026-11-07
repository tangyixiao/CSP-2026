#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+5;
ll k[N];
char f[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>k[i]>>f[i];
	}
	ll l=1,r=n;
	ll sum=0;
	while(l<r)
	{
		if(k[l]<k[r])
		{
			if(f[l]!=f[r])sum+=k[l];
			k[r]-=k[l],k[l]=0;
			l++; 
		}
		else if(k[l]==k[r])
		{
			if(f[l]!=f[r])sum+=k[l];
			k[l]=0,k[r]=0;
			l++,r--;
		}
		else
		{
			if(f[l]!=f[r])sum+=k[r];
			k[l]-=k[r],k[r]=0;
			r--;
		}
	}
	cout<<sum;
	return 0;
}
