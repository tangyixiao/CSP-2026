#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in",r);
	freopen("string.out",w);
	long long n;
	cin>>n;
	bool ck=true;
	string s,ss;
	long long a[n],k=0,ans=0;
	char c[n],x;
	for(long long i=0;i<n;i++)
	{
		cin>>a[i]>>c[i];
		x=c[i];
	}
	long long z;
	for(long long i=0;i<n;i++)
	{
		if(x==c[i]&&ck)
		{
			ck=true;
		}
		else
		{
			ck=false;
		}
		z=k+a[i];
		for(long long j=k;j<z;j++)
		{
			s[j]=c[i];
			k++;
		}
	}
	for(long long i=0;i<k;i++)
	{
		ss[i]=s[k-i];
	}
	for(long long i=0;i<k;i++)
	{
		if(ss[i]!=s[i])
		{
			ans++;
		}
	}
	int p=0;
	if(ck)
	{
		cout<<p;
	}
	else
	{
		cout<<ans/2+1;
	}
	return 0;
}
