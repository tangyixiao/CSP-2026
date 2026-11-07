#include<bits/stdc++.h>
using namespace std;
const int maxn=1e7+5;
int a[2*maxn];
char c[2*maxn];
long long  s[2*maxn]={0};
int sum=0;
int n;
long long ans;
string str;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		char c1;
		cin>>a[i]>>c1;
		s[i]=s[i-1]+a[i];
		for(long long j=s[i-1]+1;j<=s[i];j++)
		{
			c[j]=c1;
		}
	}
	long long l=1,r=s[n];
	while(l<=r)
	{
		if(c[l]==c[r])
		{
			l++;
			r--;
		}
		else 
		{
			ans++;
			l++;r--;
		}
	}
	cout<<ans;
	return 0;
}