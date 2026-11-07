#include<bits/stdc++.h>
using namespace std;
long long a[200005],n,l,o,z;
char b[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i]>>b[i];
		o+=a[i];
		if(i!=1&&b[i]==b[i-1])l++;
	}
	if(l==n-1)
	{
		cout<<0;
		return 0;
	}
	else
	{
		l=1;
		for(int i=1;i<=o;++i)
		{
			if(a[l]==0)++l;
			if(a[n-l+1]==0)--n;
			if(l>(n+1)/2)break;
			if(b[l]!=b[n-l+1])
			{
				if(a[l]>a[n-l+1])
				{
					z+=a[n-l+1];
					a[l]-=a[n-l+1];
					a[n-l+1]=0;
				}
				else
				{
					z+=a[l];
					a[n-l+1]-=a[l];
					a[l]=0;
				}
			}
			else
			{
			a[l]-=1;
			a[n-l+1]-=1;
			}
		}
	}
	cout<<z;
	return 0;
}
