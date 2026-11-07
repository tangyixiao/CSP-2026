#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn=2e5+5;
ll n,a[maxn],ans;
char c[maxn];
string s=" ";
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(ll i=1;i<=n;i++)
	{
		cin >> a[i] >> c[i];
		for(ll j=1;j<=a[i];j++)s+=c[i];
	}
	ll len=s.length()-1;
	for(ll i=1;i<=len/2;i++)
	{
		ll j=len-i+1;
		if(s[i]!=s[j])
		{
			ans++; 
		}
	}
	cout << ans;
	return 0;
} 
