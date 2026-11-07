#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],ans;
char c[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	for(long long i=1,j=n;i<j;)
	{
		long long x=min(a[i],a[j]);
		if(c[i]!=c[j])
		{
			ans+=x;
			a[i]-=x;
			a[j]-=x;
		}
		else a[i]-=x,a[j]-=x;
		if(a[i]==0)i++;
		if(a[j]==0)j--;
	}
	cout<<ans;
	return 0;
}