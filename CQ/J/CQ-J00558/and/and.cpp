#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,m;
ll a[1000005];
string s[1000005],t[1000005];
ll ans;
int main()
{
	cin >> n >> m;
	ll l=0;
	for (int i=1;i<=n;i++)
	{
		++l;
		cin >> a[i];
		int p=a[i];
		while(p)
		{
			s[l]+=p%2+'0';
			p/=2;
		}
		for (int j=s[l].size()-1;j>=0;j--) t[l]+=s[l][j];
	}
	sort(t+1,t+l+1);		
	for (int i=l;i>l-m;i--) for (int j=t[l].size()-t[i].size();j<t[l].size();j++) if (t[i+t[l].size()-t[i].size()][j]!=t[l][j]) t[l][j]='0';
	ll len=t[l].size();
	for (int i=0;i<len-t[l-m+1].size();i++) t[l][i]='0';
	ll r=0;
	for (int i=t[l].size()-1;i>=0;i--) ans+=(t[l][i]-'0')*pow(2,r++);
	cout << ans;
	return 0;
}
