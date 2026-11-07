#include <bits/stdc++.h>
using namespace std;
long long n,num;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		long long a;
		cin>>a;
		char c;
		cin>>c;
		for(long long j=1;j<=a;j++)
		{
			s+=c;
		}
	}
	long long d=s.size();
	for(long long i=0;i<s.size()/2;i++)
	{
		if(s[i]!=s[d-i-1])
		{
			num++;
		}
	}
	cout<<num;
	return 0;
}
