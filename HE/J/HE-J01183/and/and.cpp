#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m; 
ll a[1000000];
ll c[1000000];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(m==1)
	{
		sort(a+1,a+1+n);
		cout<<a[n];
	}
	if(m==2)
	{
		for(int i=1;i<=n;i++)
	    {
		    for(int j=1;j<=n;j++)
		    {
			     c[i]=max(c[i],a[i]&a[j]);
		    }
	    }
	    sor(c+1,c+1+n);
	    cout<<c[n];
	}
	return 0;
}
