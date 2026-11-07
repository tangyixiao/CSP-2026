#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+5;
vector<ll> b[35];
ll a[N],si[35];
ll last;
map<ll,ll> l;
string g2(ll x)
{
	string s="";
	while(x)
	{
		s+=(x&1)+'0';
		x>>=1;
	}
	return s;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ll n,m;
	scanf("%lld %lld",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
		string s=g2(a[i]);
		for(int j=0;j<s.size();j++)
		{
			if(s[j]=='1')
			{
				b[j].push_back(a[i]);
				si[j]++;
			} 
		}
	}
	ll ans=0;
	for(int i=31;i>=0;i--)
	{
		if(si[i]>=m)
		{
			int cnt=0;
			for(ll j:b[i])
			{
				if(l[j]==last)
				{
					cnt++;
				}
			}
			if(cnt>=m)
			{
				ans+=(1<<i);
				for(ll j:b[i])
				{
					if(l[j]==last)
					{
						l[j]=i;
					}
				}last=i;
			}	
		}
	}
	cout<<ans;
	return 0;
}
