#include <bits/stdc++.h>
using namespace std;
int n,sum=0,cnt;
long long a,ans=0;
string c,s;
int main()
{
	freopen("string.in","r",stdin)
	freopen("string.out","w",stdout)
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>c;
		if(a>=1000000000)
		{
			a=a/1000000000;
			cnt=1;
		}
		for(int i=1;i<=a;i++)
		{
			s+=c;
		}
	}
	for(int i=0;i<=s.size()-1;i++)
	{
		if(s[i]==s[s.size()-i-1])
		{
			sum++;
		}
		else
		{
			s[i]=s[s.size()-1-i];
			ans++;
		}
		
	}
	if(sum==s.size())
	{
		cout<<"0";
	}
	else
	{
		if(cnt==1)
		{
			cout<<ans*1000000000;
		}
		else
		{
			cout<<ans;
		}
	}
	return 0;
}