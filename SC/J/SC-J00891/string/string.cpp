#include<bits/stdc++.h> 
using namespace std;
long long c,t,l,n,a;
char b;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>a>>b;
		for(long long j=1;j<=a;j++)
		{
			s+=b;
		}
	}
	l=s.size()-1;
	for(long long i=1;i<=s.size()/2;i++)
	{
		if(s[t]!=s[l])
		{
			c++;
		}
		l--;
		t++;
	}
	cout<<c;
	return 0;
}