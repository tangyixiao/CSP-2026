#include<bits/stdc++.h>
using namespace std;
long long n,ans,a[200005],b[200005],x;
char c[200005];
int f1(int x)
{
	for(int i=1;i<=n;i++)
	{
		if(x<=b[i])return c[i];
	}
}//i love ccf
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		x+=a[i];
		b[i]=b[i-1]+a[i];
	}
	for(int i=1;i<=x/2;i++)
	{
		if(f1(i)!=f1(x-i+1))
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
