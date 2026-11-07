#include <bits/stdc++.h>
#include <cstdio>
#include <stdio.h>
using namespace std;
const long long N=1e12+5;
long long n,d;
char f;
long long ans=0,e=1;
char a[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>d>>f;
	    while(d--)
	    {
	    	a[e]=f;
	    	e++;
		}
	}
	for(int i=1,j=e-1;j>=i;i++,j--)
	{
		if(a[i]!=a[j])
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
