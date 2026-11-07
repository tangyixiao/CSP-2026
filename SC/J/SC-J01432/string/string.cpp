#include<bits/stdc++.h>
using namespace std;
long long s[200005],a[200005],left[27],left2[27];
char c[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n,f=0,sum=0,cnt=0;
	string ss=" ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		s[i]=s[i-1]+a[i];
		for(int j=1;j<=a[i];j++)
		{
			ss+=c[i];
		}
	}
	for(int i=1;i<=s[n]/2;i++)
	{
		if(ss[i]!=ss[s[n]-i+1])cnt++;
	}
	cout<<cnt;
	return 0;
} 