#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	string s="";
	long long cnt=0;
	long long ans=0;
	for(int i=0;i<n;i++)
	{
		long long a;
		cin>>a;
		cnt+=a;
		char b;
		cin>>b;
		while(a!=0)
		{
			s=s+b;
			a--;
		}
	}
	long long len=s.size();
	for(int i=0;i<len;i++)
	{
		if(s[i]!=s[len-1-i]) ans++;
	}
	cout<<ans/2;
	return 0;
}