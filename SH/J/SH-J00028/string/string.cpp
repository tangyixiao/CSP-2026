#include<bits/stdc++.h>
using namespace std;
long long a[200001];
char c[200001];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	for(long long i=1; i<=n; i++)
	{
		cin>>a[i];
		cin>>c[i];
	}
	long long l=1,r=n,ans=0;
	while(l<=r)
	{
		if(c[l]!=c[r]) ans+=min(a[l],a[r]);
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
	cout<<ans;
	return 0;
} 
