#include <bits/stdc++.h>
using namespace std;
long long n,a[200005],a1[200005],k=0,ans=0,l=0,r,s[200005],f;
char b[200005],c[200005],p1,p2;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a[i] >> b[i];
		k+=a[i];
	}
	f=1;
	for(int i=0;i<=n;i++)
	{
		if(i==0)continue;
		if(a[i]!=a[i-1])f=0;break;
	}
	if(f==1)
	{
		for(int i=0;i<n/2;i++)
		{
			if(b[i]!=b[n-1-i]) ans++;	
		}
		cout << ans*a[1];
		return 0;
	}
	k=0;
	f=1;
	for(int i=0;i<=n;i++)
	{
		if(i==0)continue;
		if(b[i]!=b[i-1])f=0;break;
	}
	if(f==1)
	{
		cout << 0;
		return 0;
	}
	k=0;
	if(n==1)
	{
		cout << 0;
		return 0;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<=a[i];j++)
		{
			c[k] = b[i];
			k++;
		}
	}
	long long len = k;
	l=len/2;
	for(int i=0;i<l;i++)
	{
		if(c[i]!=c[len-1-i]) ans++;
	}
	cout << ans;
	return 0;
}
