#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+10;
int a[N];
char c[N];
string rv(string s)
{
	string s1="";
	for(int i=s.size()-1;i>=0;i--)
	{
		s1+=s[i];
	}
	return s1;
}
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int sizee=0;
	bool flag1,flag2;
	flag1=flag2=1;
	cin>>a[1]>>c[1];
	for(int i=2;i<=n;i++)
	{
		scanf("%lld %c",&a[i],&c[i]);
		sizee+=a[i];
		if(a[i]!=a[i-1]) flag1=0;
		if(c[i]!=c[i-1]) flag2=0;
	}
	int ans=0;
	string s,s1;
	s=s1="";
	if(n==1||flag2)
	{
		cout<<0;
		return 0;
	}
	else if(flag1)
	{
		for(int i=1;i<=n;i++)
		{
			s+=c[i];
		}
		s1=rv(s);
		for(int i=0;i<n/2;i++)
		{
			if(s1[i]!=s[i])
			{
				ans+=a[1];
			}
		}
		cout<<ans;
		return 0;
	}
	else if(sizee<=10000000)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=a[i];j++)
			{
				s+=c[i];
			}
		}
		s1=rv(s);
		for(int i=0;i<sizee/2;i++)
		{
			if(s[i]!=s1[i]) ans++;
		}
		cout<<ans;
		return 0;
	}
	return 0;
}