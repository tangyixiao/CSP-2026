#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+10;
int a[MAXN];
char c[MAXN];
long long len,cnt,ans,n;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++)
		{
			s+=c[i];
		} 
	}
	len=s.size();
	if(len%2==0)
	{
		cnt=len/2-1;
	}
	else
	{
		cnt=len/2;
	}
	for(int i=0;i<=cnt;i++)
	{
		if(s[i]!=s[len-i-1])
		{
			ans++;
		}
	}
	cout<<ans<<"\n";
	return 0;
} 
