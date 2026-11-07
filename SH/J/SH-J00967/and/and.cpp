#include<bits/stdc++.h> 
#define ll long long
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ll n,m;
	cin>>n>>m;
	ll t[n+100]={0};
	for(ll i=1;i<=n;++i)
	{
		cin>>t[i];
	}
	sort(t+1,t+n+1);
	if(m==1) cout<<0;
	if(m==2) cout<<t[n-1];
	if(m==n) cout<<t[1];
	else cout<<t[n-4]<<endl;
	return 0;
}
