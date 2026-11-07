#include<bits/stdc++.h>
using namespace std;
string c[10005];
long long n,a[10005],ans;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	int l=1,r=n;
    long long x=1,z=1;
	while(l<=r)
	{
		if(c[l]!=c[r])
		{
			ans++;
		}
		x++;
		z++;
		if(x>a[l])
		{
			l++;
			x=1;
		}
		if(z>a[r])
		{
			r--;
			z=1;
		}
	}
	cout<<ans;
	return 0;
}
