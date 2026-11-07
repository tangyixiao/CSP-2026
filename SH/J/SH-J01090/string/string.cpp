#include<bits/stdc++.h>
using namespace std;
signed main()
{
	freopen ("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,s,ss=0,x;

	string a,b;
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>x>>b;
		for(long long j=1;j<=x;j++) a+=b;
	}
	s=(long long)a.size();
	for(long long i=0;i<=s/2;i++)
	{
		if(!(a[i]==a[s-i-1])) ss++;
	}
	cout<<ss;
}
