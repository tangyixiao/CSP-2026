#include<bits/stdc++.h>
using namespace std;
int n,a[1000010],ans;
char c[200010];
long long all,b[1000010];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		if(c[i]==c[i-1])
		{
			a[i-1]=a[i-1]+a[i];
			i--;
			n--;
		}
		b[i]+=b[i-1]+a[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(c[i]!=c[n-i+1])
		{
			ans+=min(a[i],a[n-i+1]);
		}		
	}
	cout<<ans;
}