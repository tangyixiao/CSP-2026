#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[200005];
char c[200005];
long long l,r;
long long ans;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>c[i];
	l=1,r=n;
	while(l<r)
	{
		if(c[l]!=c[r])
		{
			if(a[l]>a[r])
			{
				ans+=a[r];
				a[l]-=a[r];
				--r; 
			}
			else if(a[l]<a[r])
			{
				ans+=a[l];
				a[r]-=a[l];
				++l;
			}
			else
			{
				ans+=a[l];
				++l;
				--r;
			}
		}
		else
		{
			if(a[l]>a[r])
			{
				a[l]-=a[r];
				--r; 
			}
			else if(a[l]<a[r])
			{
				a[r]-=a[l];
				++l;
			}
			else
			{
				++l;
				--r;
			}
		}
	}
	cout<<ans;
	return 0;
}
