#include <bits/stdc++.h>
#define ll long long
#define mod 998244353
using namespace std;
pair<ll,char> c[200001];
vector<pair<ll,char> > a,b;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	ll n;
	cin>>n;
	ll sum=0;
	for (ll i=1;i<=n;i++)cin>>c[i].first>>c[i].second,sum+=c[i].first;
	ll mid;
	if (sum%2==0)mid=sum/2;
	else mid=(sum-1)/2;
	for (ll i=1,s=0;i<=n;i++)
	{
		if (s+c[i].first<=mid)a.push_back(c[i]);
		else if (s<mid&&s+c[i].first>=mid)
		{
			a.push_back(make_pair(mid-s,c[i].second));
			if (sum%2==1)b.push_back(make_pair(c[i].first+s-mid-1,c[i].second));
		}
		else b.push_back(c[i]);
		s+=c[i].first;
	}
//	for (ll i=0;i<a.size();i++)cout<<a[i].first<<' '<<a[i].second<<'\n';
//	cout<<'\n';
//	for (ll i=0;i<b.size();i++)cout<<b[i].first<<' '<<b[i].second<<'\n';
	reverse(b.begin(),b.end());
	ll i=0,j=0;
	ll ans=0;
	while (i<a.size()&&j<b.size())
	{
		ans+=(a[i].second!=b[j].second)*min(a[i].first,b[j].first);
		if (a[i].first>b[j].first)a[i].first-=b[j].first,j++;
		else if (a[i].first<b[j].first)b[j].first-=a[i].first,i++;
		else i++,j++;
	}
	cout<<ans;
	return 0;
}
