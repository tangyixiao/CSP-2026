#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long n,a[N],l,r,k,sum;
char c[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>c[i];
	l=1;
	r=n;
	while(l<r)
	{
		if(c[l]!=c[r])
		{
			if(a[l]<a[r])
			{
				a[r]-=a[l];
				sum+=a[l];
				l++;
			}
			else if(a[l]>a[r])
			{
				a[l]-=a[r];
				sum+=a[r];
				r--;
			}
			else
			{
				sum+=a[l];
				l++;
				r--;
			}
		}
		else
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
				l++;
				r--;
			}
		}
	}
	cout<<sum;
	return 0;
}