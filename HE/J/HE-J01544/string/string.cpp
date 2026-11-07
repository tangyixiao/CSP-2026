#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	long long ans=0;
	if(n==1)cout<<0;
	for(int i=1;i<=n;i++)
	{
		long long  a;
		string b;
		cin>>a;
		cin>>b;
		for(int j=1;j<=a;j++)
		{
			s+=b;	
		}
	}
	long long num=s.size();
	for(int i=0;i<num/2;i++)
	{
		long long k=num-1;
		if(s[i]!=s[k])
		{
			ans++;
			k--;
		}
	}
	cout<<ans;
	return 0;
}
