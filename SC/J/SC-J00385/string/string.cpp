#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct abc
{
	char cc;
	ll cnt;
}a[200006];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n,ans=0;
	cin>>n;
	bool flag=true;
	if(n%2!=0) flag=false;
	for(ll i=1;i<=n;i++)
	{
		cin>>a[i].cnt>>a[i].cc;
		if(a[i].cnt!=a[1].cnt) flag=false;
	}
	ll l=1,r=n;
	while(l<r)
	{
		if(a[l].cnt==0) l++;
		if(a[r].cnt==0) r--;
		if(a[l].cc!=a[r].cc) ans++;
		a[l].cnt--;
		a[r].cnt--;
	}
	if(flag) ans--;
	cout<<ans;
	return 0; 
}