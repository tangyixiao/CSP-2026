#include<bits/stdc++.h>
using namespace std;
long long n,ans;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		int a;
		char c;
		cin>>a>>c;
		for(long long j=1;j<=a;j++)
		{
			s+=c;
		}
	}
	for(long long i=0;i<s.length()/2;i++)
	{
		if(s[i]!=s[s.length()-i-1])
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
