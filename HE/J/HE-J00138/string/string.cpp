#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e6+66;
int a[N],sum;
char c[N];
int n,ans;
string s="";
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=a[i]; j++)
		{
			s+=c[i];
		}
	}
	s=' '+s;
	for(int i=1; i<=(sum+1)/2; i++)
	{
		if(s[i]!=s[sum-i+1]) ans++;
	}
	cout<<ans;
	return 0;
}
/*
*/
