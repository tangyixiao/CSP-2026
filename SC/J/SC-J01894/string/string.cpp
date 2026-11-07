#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long int n,n1;
	cin>>n;
	string s,a1;
	long long int len;
	for(long long int i=0;i<n;i++)
	{
		cin>>n1>>a1;
		for(long long int j=0;j<n1;j++)
		{
			s=s+a1;
		}
	}
	len=s.size();
	long long int ans=0;
	if(len%2==0)
	{
		long long int len1=len/2;
		for(long long int i=0;i<len1;i++)
		{
			if(s[i]!=s[i+len-1-(2*i)])
			{
				ans++;
			}
		}
	}
	else
	{
		long long int len1=(len+1)/2;
		for(long long int i=0;i<len1;i++)
		{
			if(s[i]!=s[i+len-1-(2*i)])
			{
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
}