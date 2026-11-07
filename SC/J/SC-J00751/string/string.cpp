#include <bits/stdc++.h>
using namespace std;
char ch[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,l=0,cnt=0,ans=0;
	cin>>n;
	string s;
	for(long long i=1;i<=n;i++)
	{
		long long ab;
		cin>>ab;
		l+=ab;
		char abc;
		cin>>abc;
		for(long long j=0;j<ab;j++)
		{
			ch[cnt++]=abc;
		}
	}
	for(long long i=0;i<l/2;i++)
	{
		if(ch[i]!=ch[l-i-1]) ans++;
	}
	cout<<ans;
	return 0;
} 