#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;
ll n,m;
string s[N],ans;
bool cmp(string x,string y){
	return x>y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		ll a;cin>>a;
		for(int j=30;j>=0;j--)
		{
			if(a>=(1<<j)) s[i]+='1',a-=(1<<j);
			else s[i]+='0';
		}
	}
	sort(s+1,s+n+1,cmp);
	ll r=n;
	for(int i=0;i<=30;i++)
	{
		ll sum1=0,v1=0,j;
		for(j=1;j<=r;j++)
		{
			if(s[j][i]=='0'&&v1) break;
			else if(s[j][i]=='1') sum1++,v1=1;
			if(sum1>=m) break;
		}
		if(sum1>=m) ans+='1',r=j;
		else ans+='0';
	}
	ll ansnm=0;
	for(int i=0;i<=30;i++)
	{
		ll num=ans[i]-'0';
		ll mi=30-i;
		ansnm+=num*(1<<mi);
	}
	cout<<ansnm;
	return 0;
}
