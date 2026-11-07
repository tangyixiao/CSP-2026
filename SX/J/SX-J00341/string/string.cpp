#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll sum,a[200005],n;
char c[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>n;
	for(ll i=1;i<=n;i++) cin>>a[i]>>c[i];
	int l=1,r=n;
	while(l<=r)
	{
		if(c[l]!=c[r])
		{
			if(a[l]>a[r])
			{
				sum+=a[r];
				a[l]-=a[r];
				r--;
			}
			else if(a[l]<a[r])
			{
				sum+=a[l];
				a[r]-=a[l];
				l++;
			}
			else
			{
				sum+=a[l];
				r--;l++;
			}
		}
		if(c[l]==c[r])
		{
			if(a[l]>a[r])
			{
				a[l]-=a[r];
				r--;
			}
			else if(a[l]<a[r])
			{
				a[r]-=a[l];
				l++;
			}
			else
			{
				r--;
				l++;
			}
		}
	}
	cout<<sum;
	return 0;
}