#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+10;
ll n,a[N],s[N];
char c[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	string st="";
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		ll x=0;
		while(x<a[i])
		{
			x++;
			st+=c[i];
		}
		s[i]=s[i-1]+a[i];
	}
	bool flg=true;
	char ch=c[1];
	for(int i=2;i<=n;i++)
	{
		if(ch!=c[i])
		{
			flg=false;
			break;
		}
	}
	if(flg)
	{
		cout<<0;
		return 0;
	}
	ll ans=0,len=st.size();
	for(int i=0;i<=len/2;i++)
		if(st[i]!=st[len-i-1])
			ans++;
	cout<<ans;
	return 0;
}