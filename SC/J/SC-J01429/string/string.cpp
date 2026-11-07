#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);b
	freopen("string.out","w",stdout);
	long long n,l=0,cnt=0;
	string s="";
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		long long x;
		string sc;
		cin>>x>>sc;
		l+=x;
		for(long long j=1;j<=x;j++)
		{
			s+=sc;
		}
	}
	for(long long i=0;i<l/2;i++)
	{
		if(s[i]!=s[l-i-1])
		{
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}