#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
string s;
struct Pharagraph
{
	long long val;
	char c;
	long long s,f;
} a[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,ans=0,pos=0;
	scanf("%lld",&n);
	for(int i=1;i<=n;i++)
	{
		long long v;
		char p;
		cin>>v>>p;
		for(int j=1;j<=v;j++)
		{
			s=s+p;
		}
	}
	long long len=s.size();
	for(int i=0;i<=(len-1)/2;i++)
	{
		if(s[i]!=s[len-1-i]) ans++;
	}
	cout<<ans;
	return 0;
}