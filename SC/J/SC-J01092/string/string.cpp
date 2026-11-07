#include<bits/stdc++.h>
using namespace std;
char s[1000000005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int ans=0;
	long long len=0;
	for(long long i=1;i<=n;i++)
	{
		long long a;
		char b;
		cin>>a;
		cin>>b;
		len+=a;
		for(int j=len-a;j<len;j++)
		{
			s[j]=b;
		}
	}
	for(int i=0;i<len/2;i++)
	{
		if(s[i]!=s[len-i-1])ans++;
	}
	cout<<ans;
	return 0;
}