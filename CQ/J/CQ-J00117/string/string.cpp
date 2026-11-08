#include<bits/stdc++.h>
//#define int unsigned long long
//#define int long long
using namespace std;
const int N=1e6+10;
int n,ans,gcdd,a[N];
char c[N];
string s;
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		if(i==1) gcdd=a[i];
		else gcdd=__gcd(gcdd,a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=a[i]/gcdd;j++)
		{
			s+=c[i];
		}
	}
	string s1=s;
	reverse(s1.begin(),s1.end());
	for(int i=0;i<s.size()/2;i++)
	{
		if(s[i]!=s1[i]) ans++;
	}
	cout<<ans*gcdd;


	exit(0);
}

