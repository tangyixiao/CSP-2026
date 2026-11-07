#include<bits/stdc++.h>
using namespace std;
#define int long long
string s="";
int a[200005];
char c[200005];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++)
			s+=c[i];
	}
	int cnt=0;
	int ls=s.length();
	for(int i=0;i<ls/2;i++)
		if(s[i]!=s[ls-i-1]) cnt++;
	cout<<cnt;
	return 0;
}