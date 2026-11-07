#include <bits/stdc++.h>
using namespace std;
long long n,a[100005];
char c[100005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long z=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		z+=a[i];
	}
	int l=1,r=n;
	long long s=0;
	while(l<r)
	{
		if(c[l]==c[r])
		{
			if(a[l]>a[r])
			{
				a[l]-=a[r];
				r--;
			}
			else if(a[l]==a[r])
			{
				l++;
				r--;
			}
			else
			{
				a[r]-=a[l];
				l++;
			}
		}
		else
		{
			if(l==r-1&&z%2==1)
			{
				s=s-1;
			}
			if(a[l]>a[r])
			{
				a[l]-=a[r];
				r--;
				s+=a[r];
			}
			else if(a[l]==a[r])
			{
				l++;
				r--;
				s+=a[r];
			}
			else
			{
				a[r]-=a[l];
				l++;
				s+=a[l];
			}
		}
	}
	cout<<s;
}