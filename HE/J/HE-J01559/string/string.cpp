#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	long long n;
	cin>>n;
	
	long long c=0;
	string s;
	for(int i=1;i<=n;i++)
	{
		long long a;
		char b;
		cin>>a>>b;
		for(int j=c;j<=c+a;j++)
		{
			s[j]=b;
		}
		c=c+a;
	}
	long long ans=0,t;
	if(c%2==1) t=c/2+1;
	else t=c/2;
	for(int i=0;i<t;i++)
	{
		if(s[i]!=s[c-i])
			ans++;
	}
	cout<<ans;
	return 0;
}

