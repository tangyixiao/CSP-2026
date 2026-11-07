#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
string s;
ll ans;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		ll a;
		char ss;
		cin>>a>>ss;
		while(a)
		{
			s=s+ss;
			a--;
		}
	}
	for(int i=0,j=s.length()-1;i<j;++i,--j)
	{
		if(s[i]!=s[j]) ans++;
	} 
	cout<<ans;
}
