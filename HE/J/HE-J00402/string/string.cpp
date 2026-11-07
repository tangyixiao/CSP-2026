#include<bits/stdc++.h>
using namespace std;
string a;
long long n,ans=0;
bool check(string p)
{
	int m=p.length();
	string n1=p.substr(0,m/2);
	string n2=p.substr(m/2,m);
	if(n1!=n2)
	{
		return false;
	}
	return true;
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (long long i=1;i<=n;i++)
	{
		long long n1;
		string b;
		cin>>n1>>b;
		for (long long j=1;j<=n1;j++)
		{
			a+=b;
		}
	}
	long long len=a.length();
	for (long long i=0;i<len/2;i++)
	{
		if(check(a))
		{
			break;
		}
		if(a[i]!=a[len-i-1])
		{
			a[len-i]=a[i];
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
