#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	string ip="";
	ll n;
	cin>>n;
	while(n--)
	{
		ll w;
		string c;
		cin>>w>>c;
		while(w--)
			ip+=c;
	}
	string reip=ip;
	reverse(ip.begin(),ip.end());
	ll ewr=ip.size()/2,ans=0;
	for(ll i=1;i<=ewr;i++)
		if(ip[i-1]!=reip[i-1])
			ans++;
	cout<<ans;
}
